#include<stdio.h>

#include <stdio.h>

void displayASCII()
{
  int i;
  
  for(i=0;i<=255;i++)
   {
    printf("The ASCII value of %c = %x = %o=%%= %d\n",i,i,i,i,i);
   }
}



int main()
{

    displayASCII();
    return 0;
}