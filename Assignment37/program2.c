#include<stdio.h>
void DisplayI(int ino)
{
    auto int iCnt = 1;

    while(iCnt < ino)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

void DisplayR(int ino)
{
    static int iCnt = 1;

    if(iCnt < ino)
    {
        printf("%d\t",iCnt);
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