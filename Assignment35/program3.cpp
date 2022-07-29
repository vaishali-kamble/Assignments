#include<iostream>
using namespace std;
template <class T>
T SearchFirst(T Arr[], int size, T ino)
{
    int i = 0, icnt = 0;
    for(i=0; i< size;i++)
    {   
        if(Arr[i] == ino)
        {
            icnt = i;
            break;
        }
    }
    return icnt;
}

int main()
{
    int Brr[] = {10,20,10,30,10,40,50};
    int iret = SearchFirst(Brr,5,10);
     cout<<"First Occurence :"<<iret<<endl;    
     
    return 0;
}   