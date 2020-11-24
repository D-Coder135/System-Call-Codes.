#include<stdio.h>
#include <fcntl.h>
int main()
{
int sz,fd;
// fd = open("C:/Users/PC/Documents/abc.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
fd = creat("/home/codebook/OS/ClassWork/abc.txt", 0644);
fd = open("/home/codebook/OS/ClassWork/abc.txt", O_WRONLY);
if(fd == -1)
{
printf("cannot create and open the file");
}
else
printf("\n FILE CREATED & OPENED SUCCESSSFULLY");
sz = write(fd, "hello world\n", strlen("hello world\n"));
// printf("called write(% d, \"hello world\\n\", %d)."" It returned %d\n", fd, strlen("hello world\n"), sz);
close(fd);
return 0;
}
