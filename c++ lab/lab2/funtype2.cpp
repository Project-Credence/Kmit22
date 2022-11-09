#include<iostream>
using namespace std;
//function with no argument with return value 
int func(){
    int a=10,b=20;
    return(a+b);
}
int main(){
    int v=func();
    cout<<v;
}