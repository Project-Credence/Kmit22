#include<iostream>
using namespace std;
int main(){
    int s[2][2],t[2][2],v[2][2];
    int i,j,k;
    cout<<"1st";
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            cin>>s[i][j];
        }
    }
    cout<<"2nd";
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            cin>>t[i][j];
        }
    }
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            v[i][j]=0;
            for(k=1;k<=2;k++){
                v[i][j]=v[i][j]+s[i][k]*t[k][j];
            }
        }
    }
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}