#include<stdio.h>

void chkschedule(char ch)
{
    
    if((ch == 'A') || (ch =='a'))
    {
        printf("Exam of division A at 7 AM");
    }
    
    else if((ch == 'B')||(ch =='b'))
    {
        printf("Exam of division B at 8.30 AM");
    }
    
    
    else if((ch == 'C') ||(ch =='c'))
    {
        printf("Exam of division C at 9.20 AM");
    }
    
    else if((ch == 'D') || (ch =='d'))
    {
        printf("Exam of division D at 9.30 AM");
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    chkschedule(cValue);

}