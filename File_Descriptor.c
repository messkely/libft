#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    fd = open("text1.txt", O_WRONLY | O_CREAT | O_RDONLY, 0700);
    printf("fd = %d\n", fd);
    write(fd, "hello", 5);
    if (fd == -1)
        printf("can't open file");
    else
        printf("file open succes\n");
}