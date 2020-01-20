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
        int k=1000001;
        int m=0;
        for(int i=y-1;i>=0;i--){
            if(a[i]>k){
                m++;
            }
            k=min(a[i],k);
        }
        cout<<m<<endl;
    }
}