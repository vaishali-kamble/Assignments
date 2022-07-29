#include<stdio.h>

// 123
//  3   2   1

void DisplayI(int no)
{
    while(no != 0)
    {
        printf("%d\t",no % 10);
        no = no / 10;
    }
}

void DisplayR(int no)
{
    if(no != 0)
    {
        printf("%d\t",no % 10);
        no = no / 10;
        DisplayR(no);
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