#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int p=1000000007;
    long long int n1,n2,n;
    cin>>n1>>n2;
    cin>>n;
    long long int k;
    if(n%6==1){
        k=n1;
        if(k>0){
        cout<<k%p;
        }
        else if(k==0){
            cout<<0;
        }
        else{
            cout<<(k+10*p)%p;
        }
    }
   else if(n%6==2){
        k=n2;
        if(k>0){
        cout<<k%p;
        }
        else if(k==0){
            cout<<0;
        }
        else{
            cout<<(k+10*p)%p;
        }
    }
      else if(n%6==3){
        k=n2-n1;
        if(k>0){
        cout<<k%p;
        }
        else if(k==0){
            cout<<0;
        }
        else{
            cout<<(k+10*p)%p;
        }
    }
     else if(n%6==4){
        k=-n1;
        if(k>0){
        cout<<k%p;
        }
        else if(k==0){
            cout<<0;
        }
        else{
            cout<<(k+10*p)%p;
        }
    }
     else if(n%6==5){
        k=-n2;
        if(k>0){
        cout<<k%p;
        }
        else if(k==0){
            cout<<0;
        }
        else{
            cout<<(k+10*p)%p;
        }
    }
    else if(n%6==0){
        k=n1-n2;
        if(k>0){
        cout<<k%p;
        }
        else if(k==0){
            cout<<0;
        }
        else{
            cout<<(k+10*p)%p;
        }
    }
}
    
