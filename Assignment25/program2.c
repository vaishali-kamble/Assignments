// Write a program to accept a string from user and convert string into UPPERCASE.
// Input : "marvellous"
//output : "MARVELLOUS"

#include<stdio.h>
void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str =*str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    struprX(arr);
    printf("Modified string: %s",arr);
    return 0;
}