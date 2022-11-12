#include<iostream>
using namespace std;
int main(){
    int flag=0,n;
    cin>>n;
    if(n%100==0){
        if(n%400==0){
            flag=1;
        }
        
    }
    else if(n%4==0){
        flag=1;
    }

    if(flag==1){
        cout<<"Leap year";
    }
    else{
        cout<<"Non leap year";
    }

}