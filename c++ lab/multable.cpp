#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=10;i++){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
    return 0;
}