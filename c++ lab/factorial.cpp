#include<iostream>
using namespace std;
int factorial(int n){
    int i,p=1;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
int main(){
    int x;
    cout<<"Enter no";
    cin>>x;
    cout<<"factorial is "<<factorial(x);
}