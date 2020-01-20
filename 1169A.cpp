#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int flg=1;
    while(a!=x&&b!=y){
        if(a==b){
            flg=0;
            cout<<"YES";
            break;
        }
        
        if(a!=n){
             a++;
    }
    else{
        a=1;
    }
    if(b!=1){
             b--;
        }
        else{
            b=n;
        }
      
    }
   if((a==b&&flg==1)){
       flg=0;
       cout<<"YES";
   }
    if(flg==1){
        cout<<"NO";
    }
}