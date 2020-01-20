#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        int a[y];
        for(int i=0;i<y;i++){
            cin>>a[i];
        }
        int z=0,o=0,t=0;
        for(int i=0;i<y;i++){
            if(a[i]%3==0){
                z=z+1;
            }
            if(a[i]%3==1){
                o=o+1;
            }
        if(a[i]%3==2){
            t=t+1;
        }
    }
    int w=min(o,t);
    cout<<z+w+(o-w)/3+(t-w)/3<<endl;}
}

