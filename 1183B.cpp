#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int z=a[0]+k;
    if(abs(a[n-1]-z)<=k){
        cout<<z<<endl;
    }
    else{
        cout<<-1<<endl;
    }
        
    }
}