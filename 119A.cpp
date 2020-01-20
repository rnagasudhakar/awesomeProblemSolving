#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main(){
    int a,k,n;
    cin>>a>>k>>n;
    int b=n;
    int flg=0;
    int z,m,c=0,d=0;
    while(n>0){
        m=gcd(a,n);
        n=n-m;
       c=c+1;
       if(n<=0){
           break;
       }
        z=gcd(k,n);
        n=n-z;
       d=d+1;
    }
    if(c==d){
        cout<<1;
    }
    else{
       cout<<0;
    }
}
