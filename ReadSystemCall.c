//READ SYSTEM CALL

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include <unistd.h>

int main()
{
char b[20];
int fd,xr;
fd=open("/home/codebook/OS/ClassWork/abc.txt",0);
if(fd == -1)
{
printf("cannot open file");
exit(0);
}
do
{
xr=read(fd,b,20);
b[xr]='\0';
printf("%s",b);
}while(xr==20);
close(fd);
}
// Output File : Sample2

