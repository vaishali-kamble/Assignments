// Write a program to accept a string from user and reverse that string in place.
// Input : "marvellous"
//output :  suollevram

#include<stdio.h>

void strRevX(char *str)
{
     char *start = str;
     char *end =str;
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
    char searchchar;
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);
    
    strRevX(arr);
    printf("reverse string   %s",arr);
    return 0;
}