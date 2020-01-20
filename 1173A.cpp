#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int z=max(a,b);
   int  m=min(a,b);
   if((a==b)&&(c==0)){
       cout<<0;
   }
    else if(z<=(m+c)){
        cout<<'?';
    }
    
    else{
        if(z==a){
            cout<<'+';
        }
        else{
            cout<<'-';
        }
    }
}