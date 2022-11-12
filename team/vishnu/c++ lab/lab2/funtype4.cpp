#include<iostream>
using namespace std;
//function with argument and  return value 
int func(int a,int b){
    return(a*b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<func(a,b);
}