// Write a program to accept a string from user and accept one character.Return index of first occurence of that character
// Input : "marvellous infosystem"
// output : m
//        : 2

#include<stdio.h>

int firstchar(char *str, char searchc)
{
     int iCnt = 0;
    while(*str != '\0')
    {
        printf("%c ", *str);
        if((*str == searchc) )
        {
            return iCnt;
            break;
        }
        iCnt++;
        str++;
    }
    return 0;

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
    
    iRet = firstchar(arr,cvalue);
    {
        printf("First occurence of character %d", iRet);
    }
    return 0;
}