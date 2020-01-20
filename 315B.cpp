#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int f[x];
    for(int i=0;i<x;i++){
        cin>>f[i];
    }
    int e[x];
    for(int i=0;i<x;i++){
        e[i]=0;
    }
    for(int i=0;i<x;i++){
        e[i+1]=e[i]+f[i];
    }
    int s=0,k=0;
    for(int i=0;i<y;i++){
        int a,b,c;
        cin>>a;
        if(a==1){
            cin>>b>>c;
            f[b-1]=c-s;
        }
        else if(a==2){
            cin>>b;
           s=s+b;
         
        }
        else if(a==3){
            cin>>b;
            cout<<f[b-1]+s<<endl;
        }
    }
}