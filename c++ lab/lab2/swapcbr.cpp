#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    cout<<"a-->"<<*a<<endl<<"b-->"<<*b;
}
int main(){
    cout<<"Enter a and b  ";
    int x,y;
    cin>>x>>y;
    swap(&x,&y);
}