#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
intpid = fork():
if (pid> 0) {
//getpid() returns process id and getppid() will return parent process id printf("Parent process\n");
printf("ID: %d\n\n", getpid());

else if (pid=0)
 {

printf("Child process\n");

//getpid() will return process id of child process

printf("ID: %d\n", getpid());
}
// getppid() will return parent process id of child process

printf("Parent -ID: %d\n\n", getppid());

sleep(10);

// As this time parent process has finished, it will show different parent process id

printf("\nChild process \n");

printf("ID: %d\n", getpid());

printf("Parent-ID: %d\n", getppid());
}
else
{
printf("Failed to create child process");
}
return 0;
}