#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int x;
    cin>>x;
    for(int i=0;i<x;i++){
        long long int y,z;
        cin>>y>>z;
        if(y>z){
            cout<<z<<endl;
        }
        else{
         long long int  s=0;
           long long int k=z%y;
           long long int d=k;
            while(k>0){
                s+=pow(((z/y)+1),2);
                k--;
            }
            
            s+=(y-d)*pow((z/y),2);
            cout<<s<<endl;
        }
    }
}