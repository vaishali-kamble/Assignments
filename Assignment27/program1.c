// write a program which accept string from user and copy that string into another string.
#include<stdio.h>

void strCpy( char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    src++;    
}
int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];

    strCpy(arr , brr);
    printf("%s \n",brr);
    return 0;
}