/*Input : iRow = 4 iCol = 4
Output : 1 3 5 7
         2 4 6 8
        
         
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;
int oddC=1;
int evenC=2;

for(i=1;i<=iRow;i++)
{
    
int oddC=1;
int evenC=2;
for(j=1;j<=iCol;j++)
{
    
if(i%2==0)
{   
    printf("%d \t",evenC);
    evenC=evenC+2;
     
}
else
{
    printf("%d \t",oddC);
    oddC= oddC+2;
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