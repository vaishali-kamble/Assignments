#include<stdio.h>
void DisplayI()
{
    char ch='A';
    while(ch!= 'H')
    {
        printf("%c \t",ch);
        ch++;
    }
 }

void DisplayR()
{
    static char ch='A';
    
    if(ch !='H')
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