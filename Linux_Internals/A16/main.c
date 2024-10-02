#include<stdio.h>
#include <signal.h>
#include<string.h>
#include<unistd.h>

void mysig_handler(int signum, siginfo_t *siginfo, void *data)
{
	sleep(2);
	printf("signal number -> %d\n",signum);
	for(int i = 0 ; i < 5 ;i++)
	{
		printf("In handler Running...\n");
		sleep(2);
	}
	sleep(2);
}
int main()
{
	//varible declaration
	struct sigaction newact;
	sigset_t set;

	newact.sa_flags = SA_SIGINFO;

	//clear memory
	memset(&newact, 0, sizeof(newact));
	newact.sa_sigaction = mysig_handler;

	//intialize the signal set
	sigemptyset(&set);
	//add the signal
	sigaddset(&set, SIGTERM);   

	//assign a signal
	newact.sa_mask = set;

	printf("Process %d waiting for signal.. press ctr + c from terminal\n",getpid());

	//register the sihgnal handler for SIGINT signal 
	sigaction(SIGINT, &newact, NULL); 
	sigaction(SIGUSR1, &newact, NULL);   
	sigaction(SIGSEGV, &newact, NULL);    
	sigaction(SIGCHLD, &newact, NULL);    

	while(1);

	return 0;
}
