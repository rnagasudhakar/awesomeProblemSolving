#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       long long int a,b,k,m=0,n,o;
       cin>>a>>b;
       if(a==b){
           cout<<0<<endl;
       }
      else{
          k=abs(a-b);
          m+=k/5;
          n=k%5;
          m+=(n/2);
          o=n%2;
          m+=o/1;
          cout<<m<<endl;
      }
   }
}