#include<iostream>
using namespace std;
template<typename T>
 T add(T a,T b)
{
    return a+b;
}
 T add(T a,T b,T c)
{
    return a+b+c;
}
T sub(T a,T b)
{
    return a-b;
}
int main()
{
    float a,b,c,sum;
    cout<<"enter a value";
    cin>>a;
    cout<<"enter an operation";
    char k;
    cin>>k;
    if(k==+)
    {
        cin>>b;
        cout<<"sum of two is :"<<add(a,b);
    }
    else if(k==-)
    {
        cin>>b;
        cout<<"subtraction of two is"<<sub(a,b);
    }    
    return 0;

}