#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int> v(x+1,-1);
        int a[x];
        int ans=x+5;
       for(int i=0;i<x;i++){
          cin>>a[i];
          if(v[a[i]]==-1){
              v[a[i]]=i;
          }
          else{
              ans=min(ans,i-v[a[i]]+1);
              v[a[i]]=i;
          }
       }
       if(ans>x){
           cout<<-1<<endl;
       }
       else{
           cout<<ans<<endl;
       }
    }
}