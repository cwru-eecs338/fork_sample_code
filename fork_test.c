#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t fpid;
	int count=0;
	fpid=fork();
	if(fpid<0)
		printf("error in fork!");
	else if(fpid==0){
		printf("This is the child process, my process id is %d\n",getpid());
		count++;
	}
	else{
		printf("This is the parent process, my process ID is %d\n",getpid());
		count++;
	}
	printf("Now count equals to %d\n", count);
	return 0;
}
