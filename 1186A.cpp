#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,s,t;
    cin>>n>>s>>t;
       if((n-min(s,t))<=0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
    }
}