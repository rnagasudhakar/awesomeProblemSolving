#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
      long long  int y,m;
        cin>>y;
        
       long long int s=0;
       long long int a[y];
       for(int i=0;i<y;i++){
           cin>>a[i];
           s+=a[i];
       }
        m=s/y;
       if(m*y<s){
           cout<<m+1<<endl;
       }
       else{
           cout<<m<<endl;
       }
    }
}
