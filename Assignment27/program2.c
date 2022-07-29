// write a program which accept string from user and copy that string into another string.
#include<stdio.h>

void strCpy( char *src , char *dest,int iCnt)
{
    while((*src != '\0') && (iCnt!=0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    src++;    
}
int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];

    strCpy(arr , brr,10);
    printf("%s",brr);
    return 0;
}