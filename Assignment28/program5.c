// write a program which accept string from user and copy that character of string into another string by toggling case.
#include<stdio.h>
void strCpy( char *src , char *dest)
{
     
   
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
        *src =*src + 32;
        
        }

       else if((*src >= 'a')&&(*src <= 'z'))
        {
        *src =*src - 32;
        }
        *dest = *src;
        src++;
        dest++;
    }
    src++;  
      
}

int main()
{
    char arr[30] = " Marvellous python";
    char brr[30];

    strCpy(arr , brr);
    printf("%s",brr);
    return 0;
}