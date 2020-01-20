#include<bits/stdc++.h>
using namespace std;
int main(){
    long long f=1000000007;
    long long int x;
    cin>>x;
    long long int y;
    cin>>y;
    long long int a[x];
    long long int k=0;
    for(long long int i=0;i<x;i++){
        cin>>a[i];
        k=k*y+a[i];
    }
    long long int n;
    cin>>n;
    long long int m;
    cin>>m;
    long long int b[n];
    long long int z=0;
    for(long long int i=0;i<n;i++){
        cin>>b[i];
        z=z*m+b[i];
    }
    if(k>z){
        cout<<">"<<endl;
    }
    if(k==z){
        cout<<"="<<endl;
    }
    if(k<z){
        cout<<"<"<<endl;
    }
    
    
    
}