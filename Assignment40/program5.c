#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void Wstring(char Fname[])
{
    
    char Data[100];
    int iRet=0;
    int fd = 0; // File desciptor
    
    fd = creat(Fname,0777);

    if(fd==-1)
    {
        printf("Unable to create the file \n");
        return;
    }

    printf("File is successfully created with FD %d \n ",fd);

    iRet= write(fd,Data,strlen(Data));
    printf("%d byte succesfully witten in the file \n",iRet);
}
int main()
{
    char Fname[20];
    char Data[100];

    printf("Enter file name to create \n");
    scanf("%s",Fname);

    printf("Enter the data that you want to write");
    scanf(" %[^'\n']s",Data);

    Wstring(Fname);
    return 0;
}
