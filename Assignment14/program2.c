/*Input : iRow = 4 iCol = 4
Output : A B C D
        A B C D
        a b c d
        A B C D
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;
char ch='\0';
char ch1='0';
for(i=1;i<=iRow;i++)
{
for(j=1,ch='A',ch1='a';j<=iCol;j++, ch++,ch1++)
if(i%2==0)
{
    printf("%c",ch);
}
else{
    printf("%c",ch1);
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