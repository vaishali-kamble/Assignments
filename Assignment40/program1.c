#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name to open \n");
    scanf("%s",Fname);

    fd= open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("unable to open the file");
        return -1;
    }
    printf("File is successfully open with FD %d",fd);

return 0;
}
