#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        if(y==2){
            cout<<2<<endl;
        }
        
        else if(y%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}