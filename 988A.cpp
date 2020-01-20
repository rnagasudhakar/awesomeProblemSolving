#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    int a[x];
    set<int> s;
    map<int,int> m;
    for(int i=0;i<x;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    int k=0;
    if(s.size()<y){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<x;i++){
            if(m[a[i]]==0&&k<y){
                cout<<i+1<<" ";
                k++;
            }
            m[a[i]]++;
        }
        
    }
    
}