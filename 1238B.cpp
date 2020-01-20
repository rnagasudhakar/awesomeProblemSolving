#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y,z;
        cin>>y>>z;
        int a[y];
        set<int> s;
        vector<int>v;
        for(int i=0;i<y;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        for(auto i:s){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        int m=v.size();
        int k=v.size();
       for(auto i:v){
           --m;
            if(m*z>=i){
                k=m;
            }
            else{
                break;
            }
        }
        cout<<k<<endl;
    }
}