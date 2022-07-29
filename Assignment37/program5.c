#include<stdio.h>
void DisplayI(int ino)
{
    char ch='a';
    while(ino!= 0)
    {
        printf("%c \t",ch);
        ch++;
        ino--;
    }
 }

void DisplayR(int ino)
{
    char ch='a';
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
    DisplayR(ivalue);

    return 0;
}