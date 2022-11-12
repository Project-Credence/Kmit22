#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,t[50],c1=0,c2=0;
    cout<<"Enter a & b";
    cin>>a>>b;
    int arr[50],tp=0,arr1[50];
    for(i=1;i<=a;i++){
        if(a%i==0){
            arr[c1]=i;
            c1++;
        }
    }
    for(i=1;i<=b;i++){
        if(b%i==0){
            arr1[c2]=i;
            c2++;
        }
    }
    for(i=0;i<c1;i++){
        for(j=0;j<c2;j++){
            if(arr[i]==arr1[j]){
                t[tp]=arr[i];
                break;
            }
        }
    }
    cout<<"Gcd is  "<<t[0];
}