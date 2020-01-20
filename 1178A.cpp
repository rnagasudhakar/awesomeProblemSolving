#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    vector <int> v;
    int s=a[0],s1=0;
    for(int i=0;i<x;i++){
        s1+=a[i];
        if(a[0]>=2*a[i]){
            s+=a[i];
            v.push_back(i+1);
        }
    }
        if(s>(s1/2)){
            cout<<v.size()+1<<endl;
            cout<<1<<" ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
        }
   else{
       cout<<0;
   }
}