#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
    int a[y];
    for(int i=0;i<y;i++){
        cin>>a[i];
    }
    long long int s=0;
    s=s+(a[0]-1);
    for(int i=0;i<y-1;i++){
        if(a[i]>a[i+1]){
            s=s+a[i+1]+x-a[i];
        }
        else{
            s+=a[i+1]-a[i];
        }
    }
    cout<<s<<endl;
}