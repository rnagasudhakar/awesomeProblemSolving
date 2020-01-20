#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
   string a;
   cin>>a;
    if(x==1&&y>0){
        cout<<0;
    }
    else{
        if(a[0]!='1'&&y>0){
            a[0]='1';
            y--;
        }
        for(int i=1;i<x;i++){
            if(a[i]!='0'&&y>0){
                a[i]='0';
                y--;
            }
        }
       cout<<a;
    }
    
}