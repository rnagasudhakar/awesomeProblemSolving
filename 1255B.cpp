#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int c[a];
        long long int sum=0,m=INT_MAX;
        for(int i=0;i<a;i++){
            cin>>c[i];
            sum+=c[i];
            m=min(m,c[i]);
        }
        if(b<a||a==2){
            cout<<-1<<endl;
        }
        else if(b==a){
            cout<<2*sum<<endl;
            int i=1;
           while(i<a){
               cout<<i<<" "<<i+1<<endl;
               i++;
           }
           cout<<a<<" "<<1<<endl;
        }
       
    }
}