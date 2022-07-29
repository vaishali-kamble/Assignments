#include<stdio.h>
void DisplayI()
{
    auto int iCnt = 1;

    while(iCnt < 5)
    {
        printf("%d \t",iCnt);
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt < 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR();         
    }
}

int main()
{
    DisplayR();

    return 0;
}