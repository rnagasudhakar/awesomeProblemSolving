#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
    vector<int> v,v1;
    for(int i=0;i<x;i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    int flg=1;
    for(int i=0;i<v.size();i++){
        flg=1;
        if(i==0){
            v1.push_back(v[i]);
        }
        else{
        for(int j=0;j<v1.size();j++){
            if(v[i]==v1[j]){
                flg=0;
                break;
            }
        }
        
        if(flg==1){
           v1.insert(v1.begin(), v[i]); 
             
        }
        if(v1.size()>y){
            auto it = v1.end()-1; 
            v1.erase(it); 
        }
        }
        
    }
    cout<<v1.size()<<endl;
    for(auto i2=v1.begin();i2!=v1.end();i2++){
        cout<<*i2<<" ";
    }
    
}