#include<stdio.h>
void DisplayI()
{
    char ch='a';
    while(ch!= 'h')
    {
        printf("%c \t",ch);
        ch++;
    }
 }

void DisplayR()
{
    static char ch='a';
    
    if(ch !='h')
    {
        printf("%c\t",ch);
        ch++;
        DisplayR();         
    }
}

int main()
{
    DisplayR();

    return 0;
}