#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<x;i++){
        s=s+a[i];
        if(s<y){
            cout<<0<<" ";
        }
        else{
            int z=s;
            sort(a,a+i);
            int j=i;
            int m=0;
            while(z>y){
                m=m+1;
                z=z-a[j-1];
                j=j-1;
            }
            cout<<m<<" ";
        }
    }
}
