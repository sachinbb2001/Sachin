#include "main.h"

int main(int argc, char *argv[])
{
	//varible declaration
	int pos,i;

	//cla validation part
	if(argc < 3)
	{
		printf("Plese pass valid command line arguments\n");
		printf("Insufficient commands\n");
		exit(1);
	}    
	//to check in cla | passed or not           
	else if((strcmp(argv[2],"|"))  == 0)             
	{          

		// file descripters 
		int fd[2]; //f[0]->read f[1]->write 

		//create a new pipe
		if( pipe(fd)== -1)
		{
			perror("pipe");
			exit(1);
		}
		//create a new process
		int pid1 = fork();
		int pid2 = fork();

		//parent process
		if(pid2 > 0)
		{
			sleep(4);
			exit(1);
		}
		//child1
		else if(pid1 == 0)
		{
			//child 1 argv[1]
			dup2(fd[1] , 1);
			close(fd[0]);
			close(fd[1]);
			execlp(argv[1],argv[1],(char*)NULL);
		}  
		//child2  
		else if(pid2 == 0)
		{        
			//child 2 argv[3] 
			dup2(fd[0] , 0);
			close(fd[0]);
			close(fd[1]);
			execlp(argv[3],argv[3],(char*)NULL);
		}          

	}
	else
	{            
		printf("Error : Insufficient arguments passed Usage:\n./pipe <command1> '|' <command2>\n");
		exit(1);
	}
	return 0;
}
