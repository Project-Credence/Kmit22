#include<iostream>
using namespace std;
//function with argument and no return value 
int func(int a,int b){
    cout<<a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    func(a,b);
}