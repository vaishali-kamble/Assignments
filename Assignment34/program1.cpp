#include<iostream>

using namespace std;
template<class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = T no1 * T no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<"Multiplication:"<<iRet<<endl;
    float fRet =Multiply(10.2,20.3);
    cout<<"Multiplication:"<<fRet<<endl;

    return 0;
}