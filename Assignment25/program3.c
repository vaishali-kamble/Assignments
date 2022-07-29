// Write a program to accept a string from user and toggle the case.
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

        
       else if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str =*str +32;
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