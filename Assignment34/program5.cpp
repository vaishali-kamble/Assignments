#include<iostream>
using namespace std;
template <class T>
T Min(T Arr[], int size)
{
    T min = Arr[0];
    int i = 0, min = 0;
    for(i=0; i< size;i++)
    {   
        if(Arr[i]<min)
        {
        min = Arr[i];
        }
    }
    return min;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    int iret = Min(Brr,5);
     cout<<"Minimum:"<<iret<<endl;    
     
    float Frr[] = {10.3,20.2,30.3,40.5,50.6};
    float fret = Min(Frr,5);
     cout<<"Minimum:"<<fret<<endl;


    
    return 0;
}