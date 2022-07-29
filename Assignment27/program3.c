// write a program which accept string from user and copy capital character of that string into another string.
#include<stdio.h>

void strCpycap( char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
        *dest = *src;
        src++;
        dest++;
        }
    
        src++;
    }
    src++;    
}
int main()
{
    char arr[30] = "Marvellous Multi OS ";
    char brr[30];

    strCpycap(arr , brr);
    printf("%s",brr);
    return 0;
}