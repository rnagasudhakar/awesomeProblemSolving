#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a>=b){
            cout<<"YES"<<endl;
        }
        else{
              if(a==1){
                  cout<<"NO"<<endl;
              }
              else if(a==2){
                  if(b==3){
                      cout<<"YES"<<endl;
                  }
                  else{
                      cout<<"NO"<<endl;
                  }
              }
             
                  else if(a==3){
                      cout<<"NO"<<endl;
                  }
              
              else{
                  cout<<"YES"<<endl;
              }
        }
    }
}