#include<iostream>
using namespace std;
template <class T>
T Add(T Arr[], int size)
{
    T sum = Arr[0];
    int i = 0, sum = 0;
    for(i=0; i< size;i++)
    {   
        sum = sum+Arr[i];
        
    }
    return sum;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    int iret = Add(Brr,5);
     cout<<"Addition:"<<iret<<endl;

     
    float Frr[] = {10.3,20.2,30.3,40.5,50.6};
    float fret = Add(Frr,5);
     cout<<"Addition:"<<fret<<endl;

    
    return 0;
}