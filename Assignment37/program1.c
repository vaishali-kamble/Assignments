#include<stdio.h>
void DisplayI(int ino)
{
    auto int iCnt = 0;

    while(iCnt < ino)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int ino)
{
    static int iCnt = 0;

    if(iCnt < ino)
    {
        printf("*\t");
        iCnt++;
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