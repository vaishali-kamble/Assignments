// Write a program to accept a string from user and display only digits.
// Input : "ma123rvellous"
//output : "123"

#include<stdio.h>
void struprX(char *str)
{
    while(*str != '\0')
    {
        char digit;
        if((*str >= '0')&&(*str <= '9'))
        {
            digit=*str;
            printf("%c", digit);
        }
        str++;
    }

}

int main()
{
    char arr[20];
    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    struprX(arr);
    return 0;
}