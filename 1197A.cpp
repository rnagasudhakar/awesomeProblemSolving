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
        sort(a,a+y);
        int c=0;
        for(int i=0;i<y-2;i++){
            if(a[i]>0){
                c++;
            }
        }
        int k=a[y-2];
        int m=min(y-2,(k-1));
        int z=min(m,c);
        cout<<z<<endl;
        
    }
}