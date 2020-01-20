#include<bits/stdc++.h>
using namespace std;
int main(){
   long long  int x;
    cin>>x;
   long long  int a[x];
   long long  int s=0;
    for(int i=0;i<x;i++){
        cin>>a[i];
        s=s+a[i];
    }
    sort(a,a+x);
    if(s%2!=0){
        cout<<"NO";
    }
    else{
       long long  int k=s-a[x-1];
        if(k>=a[x-1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}