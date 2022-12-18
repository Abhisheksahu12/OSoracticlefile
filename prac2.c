#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{

printf("\n The kernel version is: \n");
system("cat /proc/sys/kernel/osrelease");
printf("\n The CPU info: \n");
system("cat /proc/cpuinfo\n");
return 0;
}
