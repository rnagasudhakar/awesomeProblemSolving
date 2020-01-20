#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    for(int i=0;i<x;i++){
        long long int y;
        cin>>y;
       long long  int k=0;
        while(y!=1&&y>1){
            if((y%2)==0){
                y=y/2;
                k=k+1;
            }
            else  if((y%3)==0){
                y=(2*y)/3;
                k=k+1;
            }
            else if ((y%5)==0){
                y=(4*y)/5;
                k=k+1;
            }
            if(y!=1){
                if(y%2!=0&&y%3!=0&&y%5!=0){
                    cout<<-1<<endl;
                    break;
                }
            }
        }
        if(y==1){
            cout<<k<<endl;
        }
        
    }
}