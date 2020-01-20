#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int k=0;
    int s=0;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        if(a[i]<0){
            k++;
        }
        s=s+a[i];
    }
   
    if(k==y){
        int m=0;
       for(int i=0;i<x;i++){
           m=m+abs(a[i]);
       }
       cout<<m;
    }
    else if(k>y){
        for(int i=0;i<y;i++){
            s=s+2*abs((a[i]));
        }
        cout<<s;
    }
    else if(k<y){
          for(int i=0;i<k;i++){
              a[i]=a[i]*-1;
            s=s+2*abs((a[i]));
        }
        sort(a,a+x);
        if((k-y)%2==0){
            cout<<s;
        }
        else{
            cout<<s-2*a[0];
        }
       
    }
  
    
}