#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid,p;
pid=fork();
if(pid<0)
{
fprintf(stderr,"Fork Failed");
exit(1);
}
else if(pid==0){
printf("\n I am Child Process");
printf("\n My pid is: %d",getpid());
exit(0);
}
else{
printf("\n I am Parent Process ");
printf("\n My pid is: %d", getpid());
exit(1);
}
}
