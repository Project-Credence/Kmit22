#include<iostream>
using namespace std;
int square(int a){
    return(a*a);
}
int main(){
    int n;
    cout<<"Enter a no  ";
    cin>>n;
    cout<<"The square of the given no is  "<<square(n);
}