/*
Name: Sachin Belavi
Date: 31/03/2024
Title:
Sample Input:
Sample Output:
*/
#include "main.h" 

int main(int argc,char *argv[])
{

	int s_fd, d_fd, read_len;
	char choice;

	//for -p to copy the permission mode
	struct stat sb;

	if (argc < 3)
	{
		printf("Insufficient arguments\n");
		printf("Usage:- ./my_copy [option] <source file> <destination file> \n");
		printf("please pass valid command line arguments\n");
		return -1;
	}
	// check for -p permissions 
	if (strcmp(argv[1], "-p") == 0 )
	{
		printf("Permissions also copied from source file to destination file.\n");
		// To open source.txt to read 
		if ((s_fd = open(argv[2], O_RDONLY)) == -1 )
		{
			perror("open");
			return -1;
		}

		//get the permission of this file
		//stat(argv[2], &sb);
		if (stat(argv[2], &sb) )
		{
			perror("stat");
			return -1;
		}

		//To create open dest.txt to copy the data 
		//d_fd = open(argv[2],O_CREAT | O_EXCL | O_WRONLY);
		if ( (d_fd = open(argv[3], O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1 )
		{
			printf("File %s is already exists.\n Do you want to overwrite (y/n): ", argv[2]);
			scanf("%c", &choice);

			if(choice == 'n' || choice == 'N')
			{
				return 0;
			}
			else if (choice == 'y' || choice == 'Y')
			{
				//for overwriting
				if ( (d_fd = creat(argv[3], 0664)) == -1 )
				{
					perror("open");
					return -1;
				}
			}

		}
		//change the permisions
		if (chmod(argv[3], sb.st_mode & 0777))   		
		{
			perror("chmod");
			return -1;    		
		}

	}
	else            
	{      
		// read the 1 arg file content                  
		s_fd = open(argv[1],O_RDONLY);

		if(s_fd == -1)
		{
			printf("error : Please pass the source file\n");       
			return -1;
		}
		// write the content to 1st arg file to 2nd arg file
		d_fd = open(argv[2],O_CREAT | O_EXCL | O_WRONLY);

		if(d_fd == -1)
		{
			printf("File %s is already exists.\nDo you want to overwrite (y/n): ", argv[2]);                    
			// read choice from user
			scanf("%c",&choice);          
			if(choice == 'y' || choice == 'y')
			{
				d_fd = open(argv[2], O_TRUNC | O_WRONLY);
			}
			else if(choice == 'n' || choice == 'N')
			{
				return -1;
			}
		}
	}     
	// function call                   
	copy_con(s_fd,d_fd);      			
	close(s_fd);			
	close(d_fd);            
	return 0;
}   
//copy the data from source file to destination   
int copy_con(int s_fd, int d_fd)   
{

	int read_len = 0;	    
	char buff[BUFF_SIZE];

	//read the data from the source.txt till end and copy	    
	while( ((read_len = read(s_fd, buff, BUFF_SIZE)) != -1 ) && (read_len != 0) )	    
	{		    
		if( write(d_fd, buff, read_len) == -1 )		    
		{			    
			close(s_fd);			    
			close(d_fd);			    
			return -1;		    
		}

	}        
	// to check file content present are not        
	if(d_fd =! NULL)        
	{            
		printf("Success : file contents are copied\n");        
	}    
	return 0;       
}
