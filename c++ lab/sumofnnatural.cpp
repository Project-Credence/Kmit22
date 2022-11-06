#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"Sum is "<<s;
    return 0;
}
