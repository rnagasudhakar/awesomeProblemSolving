#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y,p;
    cin>>x>>y>>p;
   long long  int k=x+y;
    cout<<k/p<<" ";
    if(x%p+y%p>=p){
        cout<<p-max(x%p,y%p);
    }
    else{
        cout<<0;
    }
}
