#include<stdio.h>
#include <signal.h>
#include<string.h>
#include<unistd.h>

void new_handler(int signum, siginfo_t *siginfo, void *data)
{       
	printf("Segmentation fault..!\n");   
	printf("address %p caused error\n",siginfo->si_addr);
	signal(SIGSEGV,SIG_DFL);
}
int main()
{
	//varible declaration
	struct sigaction newact;
	char *str = "Emertxe";

	//clear the garbage values
	memset(&newact, 0, sizeof(newact));

	//using ths SA_SIGINFO flag
	newact.sa_sigaction = new_handler;
	newact.sa_flags = SA_SIGINFO;  

	//register the sihgnal handler for SIGINT signal 
	sigaction(SIGSEGV, &newact, NULL);    

	//segmentation fault accour
	*str = 'W'; 

	return 0;
}
