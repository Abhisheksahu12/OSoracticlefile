#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
int sum; //data shared among threads
void *runner(void *param); //the thread *I
int main(int argc,char *argv[])
{
//thread calculates the sum of numbers from
//1 to argv[1](an integer)
pthread_t tid; //thread identifier *I
pthread_attr_t attr; //set of thread attributes
if(argc!=2)
{
fprintf(stderr,"usage:a.out<integervalue>\n");
return -1;
}
if(atoi(argv[1])<0)
{
fprintf(stderr,"%d must be >=0\n",atoi(argv[1]));
return -1;
}
pthread_attr_init(&attr); //get default attributes *I
pthread_create(&tid,&attr,runner,argv[1]);
pthread_join(tid,NULL); //wait for thread to exit *I
printf("SUM=%d\n",sum);
return 0;
}
void *runner(void *param)
{
int i,upper=atoi(param);
sum=0;
for(i=1;i<=upper;i++)
sum+=i;
pthread_exit(0);
}
