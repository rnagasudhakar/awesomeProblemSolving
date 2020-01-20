#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    long long int d;
    cin>>d;
    long long int k=0;
    long long int z=0;
    sort(a,a+3);
    for(int i=0;i<3;i++){
        k=max((a[0]+z-a[i]),k);
        z=z+d;
    }
    cout<<k;
    
}