#include<iostream>
using namespace std;
int multiply(int a,int b=1){
    return(a*b);
}
int main(){
    int p,q;
    cout<<"Enter a & b-->";
    cin>>p>>q;
    cout<<"The mul of the given no is  "<<multiply(p,q);
    cout<<"The mul of the given no is  "<<multiply(p);
}