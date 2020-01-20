#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int y=a[0],b=a[0];
    for(int i=0;i<x;i++){
        y=max(y,a[i]);
        b=min(b,a[i]);
    }
    int z,c;
    for(int i=0;i<x;i++){
        if(a[i]==y){
            z=i;
            break;
        }
    }
    
    for(int i=x-1;i>0;i--){
        if(a[i]==b){
            c=i;
            break;
        }
    }
    if(c>z){
        cout<<z+x-1-c;
    }
    else{
        cout<<z+x-2-c;
    }
    
    
}