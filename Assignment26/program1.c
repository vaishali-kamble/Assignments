// Write a program to accept a string from user and accept one character.character is present or not.
// Input : "marvellous infosystem"
// output : 1

#include<stdio.h>
# define true 1
# define false 0

typedef int bool;

bool countwhitw(char *str, char searchc)
{
     bool iCnt = false;
    while(*str != '\0')
    {
        if((*str == searchc))
        {
            iCnt = true;
        }
        str++;
    }
    return iCnt;

}

int main()
{
    char arr[20];
    char cvalue ;
    bool bRet = false;
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);
    printf("Enter the character :\n");
    scanf(" %c",&cvalue);
    
    bRet = countwhitw(arr,cvalue);
    if(bRet== true)
    {
        printf("Available");
    }
    else
    {
        printf("Not available");
    }
    return 0;
}