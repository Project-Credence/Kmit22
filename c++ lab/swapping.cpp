#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"Enter a & b";
    cin>>a>>b;
    t=a;
    a=b;
    b=t;
    cout<<a<<b;
    return 0;
}