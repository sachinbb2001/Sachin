/*
Name: Sachin Belavi
Date: 07/04/2024
Title:
Sample Input:
Sample Output:
 */

#include "main.h"

int main()
{
	//creating a new process
	int c1 = fork();

	//parents part
	if(c1 > 0)
	{               
		int c2 = fork();
		if(c2 > 0)
		{
			int c3 = fork();
			if(c3 > 0)
			{
				//child created message 
				sleep(2);
				printf("child 1 with pid %d created\n",c1);
				printf("child 2 with pid %d created\n",c2);
				printf("child 3 with pid %d created\n",c3);
				sleep(2);
			}
			//child process      
			else
			{                
				sleep(4);
				printf("child 3 pid %d was terminated with code %d\n",getpid(),c3);
			}
		}
		else
		{
			sleep(3);       
			printf("child 2 pid %d was terminated with code %d\n",getpid(),c2);

		}

	}
	else
	{
		sleep(3);
		printf("child 1 pid %d was terminated with code %d\n",getpid(),c1);
	}
	return 0;
}
