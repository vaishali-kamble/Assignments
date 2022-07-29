// write a program which accept string from user and copy that character of string into another string in reverse order.
#include<stdio.h>

void strCpy( char *src , char *dest)
{

    char *start = src;
    char *end = src;
    char temp;

    while(*end != '\0')
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

    char *test = src;
    while(*test != '\0')
    {
        *dest = *test;
        test++;
        dest++;
    }  
    test++;

}

int main()
{
    char arr[30] = " Marvellous python";
    char brr[30];

    strCpy(arr , brr);
    printf("%s",brr);
    return 0;
}