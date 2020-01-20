#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
       long long int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
     long long int k,z;
     if(a%c==0){
         k=a/c;
     }
     else{
         k=a/c+1;
     }
     if(b%d==0){
         z=b/d;
     }
     else{
         z=b/d+1;
     }
     if(k+z>e){
         cout<<-1<<endl;
     }
     else{
         cout<<k<<" "<<z<<endl;
     }
        
    }
}