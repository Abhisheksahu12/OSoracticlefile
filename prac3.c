#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{


int a;
printf("\nKernel Version:");
system("cat /proc/sys/kernel/osrelease");
printf("\nConfigured free and Used memory:\n");
system("cat /proc/meminfo | awk 'NR==1, NR==2 {print}'");
return 0;
}
