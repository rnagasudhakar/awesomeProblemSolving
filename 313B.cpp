#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=s.length();
    int m;
    cin>>m;
    int a[x];
    for(int i=0;i<x;i++){
        a[i]=0;
    }
    for(int i=0;i<x;i++){
        a[i+1]=a[i]+(s[i]==s[i+1]);
    }
    for(int i=0;i<m;i++){
        int k=0;
        int l,r;
        cin>>l>>r;
        k=a[r-1]-a[l-1];
        cout<<k<<endl;
    }
}