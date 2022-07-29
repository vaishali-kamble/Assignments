#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    char Fname[20];
    char Data[20];
    int iRet = 0;
    int fd = 0;

    printf("Enter the file name to create the file \n");
    scanf("%s",Fname);

    fd= creat(Fname,0777);

    if(fd==-1)
    {
        printf("unable to create the file");
        return -1;
    }
    printf("File is successfully created with FD %d",fd);
    
    iRet= write(fd,Data,strlen(Data));
    printf("%d byte succesfully witten in the file \n",iRet);
    return 0;
return 0;
}
