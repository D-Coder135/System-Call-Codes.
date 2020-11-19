// Open System Call

#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>

int main() 
{
int fd=open("/home/codebook/OS/ClassWork/abc.txt",O_RDONLY);
printf("%d",fd);
if(fd == -1)
{
printf("cannot open the file");
exit(0);
}
else
printf("\n FILE OPENED SUCCESSSFULLY");
close(fd);
if(fd == -1)
{
printf("cannot close the file");
exit(0);
}
else
printf("\n FILE CLOSED SUCCESSSFULLY");
return 0;
}

//OUTPUT:FILE OPENED SUCCESSSFULLY
// Output File : Sample

