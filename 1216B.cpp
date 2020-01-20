#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    int b[x]={0};
  
    for(int i=0;i<x;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a, a+x, greater<int>()); 
    int k=1;
    for(int i=1;i<x;i++){
        k+=((a[i]*i)+1);
    }
    cout<<k<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(a[i]==b[j]){
                cout<<j+1<<" ";
                b[j]=-1;
                break;
            }
        }
    }
}