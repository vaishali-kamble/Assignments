// write a program which accept two string from user and concate two string into another string.
#include<stdio.h>

void strCpycap( char *src , char *dest)
{
    while(*src !='\0')
    {
        src++;
    }
    while(*dest!='\0')
    {
        *src = *dest;
        dest++;
        src++;

    }
    *src = '\0';
}
int main()
{
    char arr[30] = "Marvellous Infosystem";
    char brr[30] = "Logic Building";

    strCpycap(arr , brr);
    printf("%s",brr);
    return 0;
}