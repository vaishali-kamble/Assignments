/*Input : iRow = 4 iCol = 4
Output : 1 2 3 4
         5 6 7 8
         9 1 2 3
         
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;
int iCnt=0;

for(i=1;i<=iRow;i++)
{
for(j=1;j<=iCol;j++)

{
    iCnt++;
    printf("%d", iCnt);
    if(iCnt ==9)
    {
        iCnt = 0;
    }
}


printf("\n");
}
}
int main()
{
int iValue1 = 0;
int iValue2 = 0;
printf("Enter number of row");
scanf("%d",&iValue1);


printf("Enter number of column");
scanf("%d",&iValue2);


Pattern(iValue1,iValue2);

return 0;
}