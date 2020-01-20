#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        int a[y];
        int b[y];
        for(int i=0;i<y;i++){
            cin>>a[i];
        }
        for(int i=0;i<y;i++){
            cin>>b[i];
        }
        set<int>s;
        int k;
        for(int i=0;i<y;i++){
           
            if(a[i]-b[i]!=0){
            s.insert(a[i]-b[i]);
            }
             a[i]=a[i]-b[i];
        }
        int m=0;
        for(auto j:s){
            if(j>0){
                m=1;
                break;
            }
        }
        if(m==1){
            cout<<"NO"<<endl;
        }
        else{
       if(s.size()>1){
           cout<<"NO"<<endl;
       }
       else if(s.size()==1){
           vector<int>v;
           for(int i=0;i<y;i++){
               if(a[i]!=0){
                   v.push_back(i);
               }
           }
           int flg=1;
           for(int i=0;i<v.size()-1;i++){
               if(abs(v[i+1]-v[i])!=1){
                   cout<<"NO"<<endl;
                   flg=0;
                   break;
               }
           }
           if(flg==1){
               cout<<"YES"<<endl;
           }
       }
       else{
           cout<<"YES"<<endl;
       }
    }
    }
}