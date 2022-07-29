// Write a program to accept a string from user and count the number of capital character.
// Input : "Marvellous Multi OS"

#include<stdio.h>
int CountCapital(char *str)
{   
    int iCnt = 0;
    while(*str!='\0')
    
    {
        if((*str>='A')&&(*str<='Z'))
        {
        iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String \n");

    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}