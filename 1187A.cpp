#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int n,s,t;
        cin>>n>>s>>t;
        cout<<(n-min(s,t))+1<<endl;
    }
}