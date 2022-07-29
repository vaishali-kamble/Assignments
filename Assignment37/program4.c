#include<stdio.h>
void DisplayI(int ino)
{
    char ch='A';
    while(ino!= 0)
    {
        printf("%c \t",ch);
        ch++;
        ino--;
    }
 }

void DisplayR(int ino)
{
    char ch='A';
    if(ino!= 0)
    {
        printf("%c \t",ch);
        ch++;
        ino--;
        DisplayR(ino);
    }
 }

int main()
{

    int ivalue=0;
    printf("enter the number",ivalue);
    scanf("%d",&ivalue);
    DisplayI(ivalue);

    return 0;
}