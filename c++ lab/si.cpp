#include<iostream>
using namespace std;
int main(){
    int p,t,r;
    float si;
    cout<<"Enter principle amount";
    cin>>p;
    cout<<"Enter time";
    cin>>t;
    cout<<"Enter rate of intrest";
    cin>>r;
    si=(p*t*r)/100;
    cout<<"si is"<<si;
    return 0;
}

