#include<iostream>
using namespace std;
int main(){
    int n,t,s;
    cout<<"Enter a no.";
    cin>>n;
    s=n;
    while(n!=0){
        t=t*10+(n%10);
        n=n/10;
    }
    if(s==t)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}