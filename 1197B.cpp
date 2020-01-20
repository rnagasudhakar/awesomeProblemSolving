#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<x;i++){
        k=max(k,a[i]);
    }
    int j;
    for(int i=0;i<x;i++){
        if(a[i]==k){
            j=i;
            break;
        }
    }
    int flg=1;
   
    for(int i=j+1;i<x-1;i++){
        if(a[i]<a[i+1]){
            flg=0;
            cout<<"NO";
            return 0;
        }
    }
    
    for(int i=0;i<j;i++){
        if(a[i]>a[i+1]){
            flg=0;
            cout<<"NO";
            return 0;
        }
    }
  
    if(flg==1){
        cout<<"YES";
    }
}