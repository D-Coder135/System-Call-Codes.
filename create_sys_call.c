// CREATE SYSTEM CALL (USING CREAT AND OPEN)

#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>

int main()
{
int fd,fd1;
fd = creat("/home/codebook/OS/ClassWork/a3.txt", 0644);
if (fd == -1)
{
printf("cannot create the file");
exit(0);
}
else
printf("\n FILE CREATED SUCCESSSFULLY");
fd1 = open("/home/codebook/OS/ClassWork/a4.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd1 == -1)
{
printf("cannot create the file");
exit(0);
}
else
printf("\n FILE CREATED SUCCESSSFULLY");
return 0;
}
