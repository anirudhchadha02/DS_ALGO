#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#define BUFSIZE 1024

int main()
{
    int fd1;
    int n;
    char buf[BUFSIZE];
    fd1=open("file1.txt", O_WRONLY | O_CREAT);
    while((n=read(STDIN_FILENO, buf,BUFSIZE))>0)
    {
        write(fd1,buf,10);
    }
}