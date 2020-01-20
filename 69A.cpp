#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x],b[x],c[x];
     int d,e,f;
    for(int i=0;i<x;i++){
        cin>>d>>e>>f;
        a[i]=d;
        b[i]=e;
        c[i]=f;
    }
    int s=0,s1=0,s2=0;
   
    for(int i=0;i<x;i++){
        s+=a[i];
        s1+=b[i];
        s2+=c[i];
    }
    if(s==0&&s1==0&&s2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}