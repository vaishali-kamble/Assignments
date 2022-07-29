/*Input : iRow = 4 iCol = 4
Output :  1 3 5 7
          a b c d 
          1 3 5 7
          a b c d   
         
        
         
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;
char ch='\0';

for(i=1;i<=iRow;i++)
{

for(j=1,ch='a';j<=iCol;j++,ch++)
{
    
if(i%2==0)
{   
    printf("%d \t",j);
     
}
else
{
    printf("%c\t",ch);
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