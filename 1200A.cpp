#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s;
    cin>>s;
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    for(int i=0;i<x;i++){
        if(s[i]=='L'){
            for(int i=0;i<10;i++){
                if(a[i]==0){
                    a[i]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R'){
            for(int i=9;i>=0;i--){
                if(a[i]==0){
                    a[i]=1;
                    break;
                }
            }
        }
        else if(s[i]>47&&s[i]<58){
            a[s[i]-48]=0;
        }
    }
    for(int i=0;i<10;i++){
        cout<<a[i];
    }
}