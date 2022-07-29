#include<stdio.h>

void Display(char ch)
{
    if((ch>='A')&&(ch <='Z'))
    {
        int i=0;
        for(i=ch;i<='Z';i++)
        {
            
        printf("%c ",i);
        }
    }

    if((ch>='a')&&(ch <='z'))
    {
        int i = 0;
        for(i=ch;i>='a';i--)
        {
            
        printf("%c ",i);
        }
    }
}
int main()
{
    char cValue='\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}