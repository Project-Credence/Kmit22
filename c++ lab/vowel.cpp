#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter char";
    cin>>c;
    if(c=='a'||c=='e'||c=='o'||c=='i'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }

    return 0;
}