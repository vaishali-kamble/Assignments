// Write a program to accept a string from user and convert string into lowercase.
// Input : "MARVELLOUS"
//output : "marvellous"

#include<stdio.h>
void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str =*str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);
    printf("Modified string: %s",arr);
    return 0;
}