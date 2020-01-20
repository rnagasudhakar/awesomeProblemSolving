#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int k=1,m=1;
    for(int i=0;i<x-1;i++){
        if(a[i]<=a[i+1]){
            k=k+1;
        }
        else{
            m=max(k,m);
            k=1;
        }
    }
    m=max(m,k);
    cout<<m<<endl;
}