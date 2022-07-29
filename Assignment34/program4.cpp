#include<iostream>
using namespace std;
template <class T>
T Max(T Arr[], int size)
{
    T max = Arr[0];
    int i = 0, max = 0;
    for(i=0; i< size;i++)
    {   
        if(Arr[i]>max)
        {
        max = Arr[i];
        }
    }
    return max;
}

int main()
{    int Brr[] = {10,20,30,40,50};
    int iret = Max(Brr,5);
     cout<<"Maximum:"<<iret<<endl;

     
    float Frr[] = {10.3,20.2,30.3,40.5,50.6};
    float fret = Max(Frr,5);
     cout<<"Maximum:"<<fret<<endl;

    
    return 0;
}