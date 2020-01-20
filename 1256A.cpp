#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n,s,k,flg=0;
        cin>>a>>b>>n>>s;
        if(b>=(s-n*a)&&n*a<=s){
            cout<<"YES"<<endl;
            flg=1;
        }
        else if(n*a>s){
             if(b>=(s%n)){
                 cout<<"YES"<<endl;
                 flg=1;
             }
        }
        if(flg==0){
            cout<<"NO"<<endl;
        }
    }
}