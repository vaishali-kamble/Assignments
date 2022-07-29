// Write a program to accept a string from user and accept one character.Return frequency of that character
// Input : "marvellous infosystem"
// output : m
//        : 2

#include<stdio.h>

int countwhitw(char *str, char searchc)
{
     int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == searchc))
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
    char cvalue ;
    int iRet = 0;
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);
    printf("Enter the character :\n");
    scanf(" %c",&cvalue);
    
    iRet = countwhitw(arr,cvalue);
    {
        printf("Frequency of character %d", iRet);
    }
    return 0;
}