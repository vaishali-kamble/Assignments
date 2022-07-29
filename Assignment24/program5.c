// Write a program to accept a string from user and reverse string.
// Input : "Marvellous"
//output : "suollevraM"

#include<stdio.h>
void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
 
}

int main()
{
    char arr[20];
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    printf("Reverse string: %s",arr);
    return 0;
}