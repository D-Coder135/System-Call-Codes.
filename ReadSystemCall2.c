#include<stdio.h>
#include <fcntl.h>

int main()
{
int fd,
sz;
//char *c = (char *) calloc(100, sizeof(char));
char c[20];
fd=open("/home/codebook/OS/ClassWork/abc.txt",O_RDONLY);
if(fd == -1)
{
printf("cannot open file");
}
sz = read(fd, c, 5);
printf("called read(% d, c, 5). returned that"" %d bytes were read.\n", fd, sz);
c[sz] = '\0';
printf("Those bytes are as follows: % s\n", c);
close(fd);
return 0;
}
// Output File : sample3

