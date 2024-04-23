#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main() {
    char *message = "Hello World!\n";
    char *file_name = "output.txt";
    int fd;
    write(STDOUT_FILENO, message, strlen(message));
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    write(fd, message, strlen(message));
    close(fd);
    return 0;
}