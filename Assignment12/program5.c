/*input : 5
Output : # 1 *  # 2 *  # 3 *  # 4 *  #  5 *
*/
#include<stdio.h>
void Pattern(int iNo)
{
int i=0;
int iMult=1;
for(i=1;i<=(iNo*2);i++)
{
if(i%2==0)
{
printf("%d\t",i);
}
}
}
int main()
{
int iValue = 0;
printf("Enter number of elements");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}