#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    string s;
    cin>>x;
    cin>>s;
    int m=0,m1=0,flg;
    for(int i=0;i<x;i++){
        if(s[i]=='4'||s[i]=='7'){
            flg=1;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0;i<x;i++){
        m+=s[i]-48;
    }
    for(int i=0;i<x/2;i++){
        m1+=s[i]-48;
    }
    if(m1*2==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}