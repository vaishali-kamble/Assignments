#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
void DisplayData(char fname[])
{
int fd=0;
int iRet = 0;
char Data[100];
fd = open(fname,O_RDONLY);
if(fd==-1)
{
    printf("Unable to open file ");
}
printf("Succesfully open with FD:%d \n",fd);

iRet = read(fd,Data,sizeof(Data));

printf("%d byte succesfully read from file ",iRet);


close(fd);
}


int main()
{
    char filename[20];

    printf("Enter the file name to open the file:");
    scanf("%s",filename);

    DisplayData(filename);

    return 0;

}