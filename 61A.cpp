#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    int k=s.length();
    for(int i=0;i<k;i++){
        if(s[i]==s1[i]){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
}