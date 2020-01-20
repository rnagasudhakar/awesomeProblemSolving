#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int k=0,m=0;
    for(int i=0;i<x;i++){
        if(a[i]%2==0){
            k++;
        }
        else{
            m++;
        }
    }
    cout<<min(k,m);
}