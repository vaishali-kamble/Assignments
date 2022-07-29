#include<iostream>
using namespace std;
template <class T>
T Reverse(T Arr[], int size)
{
    int i = 0, icnt = 0;
    for(i=size; i>0;i--)
    {   
        cout<<Arr[i];
    }
}

int main()
{
    int Brr[] = {10,20,10,30,10,40,50};

    for(int i= 0;i<=9;i++)
    {
        cout<<Brr[i];
    }
    Reverse(Brr,9);
    
    for(int i= 0;i<=9;i++)
    {
        cout<<Brr[i];
    }
    return 0;
}   