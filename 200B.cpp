#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    double s=0;
    for(int i=0;i<x;i++){
        cin>>a[i];
        s=s+a[i];
    }
    double k;
    double z=x*100;
    k=(s/z)*100;
    cout<<k;
}