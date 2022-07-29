// Write a program to accept a string from user and count the number of white spaces.
// Input : "marvellous infosystem"
//output : 1

#include<stdio.h>
int countwhitw(char *str)
{
     int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == ' '))
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

    iRet = countwhitw(arr);
    printf("Number of Whitespaces are : %d", iRet);
    return 0;
}