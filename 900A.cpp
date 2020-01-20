#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x],b[x];
    int k=0,f=0;
    for(int i=0;i<x;i++){
        cin>>a[i];
        cin>>b[i];
          if(a[i]>0){
        k=k+1;
    }
    else{
        f=f+1;
    }
    }
  
    if(k<2||f<2){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}