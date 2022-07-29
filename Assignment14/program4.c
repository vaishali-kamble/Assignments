/*Input : iRow = 4 iCol = 4
Output : 4 4 4 4 
         3 3 3 3
         2 2 2 2 
         1 1 1 1 
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;

for(i=1;i<=iRow;i++)
{
for(j=iCol;j>=1;j--)

{
    printf("%d ",j);
}

printf("\n\t ");
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