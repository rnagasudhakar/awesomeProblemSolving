#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a[y];
    for(int i=0;i<y;i++){
        cin>>a[i];
    }
    sort(a,a+y);
    int k=INT_MAX;
    for(int i=0;i<y;i++){
        if(i+x-1<y){
        k=min(k,abs(a[i]-a[i+x-1]));
        }
    }
    cout<<k;
    
}