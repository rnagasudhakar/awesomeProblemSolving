#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int m=0;m<x;m++){
    string s,s1;
    cin>>s>>s1;
    int flg=0,k=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s1.length();j++){
            if(s[i]==s1[j]&&flg==0){
                k++;
                cout<<"YES"<<endl;
                flg=1;
                break;
            }
        }
    }
    if(k==0){
        cout<<"NO\n";
    }
    }
}