#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=s.length();
    int l=0;int u=0;
    for(int i=0;i<k;i++){
        if(s[i]>90){
            l++;
        }
        else{
            u++;
        }
    }
    if(l>=u){
    for(int i=0;i<k;i++){
        if(s[i]<91){
            s[i]=s[i]+32;
        }
        cout<<s[i];
    }
    }
    else{
         for(int i=0;i<k;i++){
        if(s[i]>91){
            s[i]=s[i]-32;
        }
        cout<<s[i];
    }
    }
}