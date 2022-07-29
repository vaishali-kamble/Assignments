/*input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/
#include<stdio.h>
void Pattern(int iNo)
{
int i=0;
for(i=iNo;i>=1;i--)
{
printf("%d # ",i);
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