// Write a program to accept a string from user and return difference between frequency of small character
// and frequency of capital character.
// Input : "Marvellous Multi OS"

#include<stdio.h>
int Difference(char *str)
{   
    int smc=0,capc=0,diff=0;
    while(*str!='\0')
    {
        if((*str >='a')&&(*str <= 'z'))
        {
            smc++;
        }
        
        else if((*str >='A')&&(*str <= 'Z'))
        {
         capc++;
        }
        str++;
        diff = capc - smc;
    }
    return diff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("Small Character : %d",iRet);
    return 0;
}