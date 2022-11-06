#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int main(){
    int x,y;
    cout<<"Enter a and b";
    cin>>x>>y;
    cout<<"The sum is  "<<add(x,y);
}