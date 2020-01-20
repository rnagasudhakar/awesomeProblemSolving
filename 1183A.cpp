#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int n=x;
    int c=0;
        while(x>0){
            c=c+x%10;
            x=x/10;
        }
    while(c%4!=0){
         n=n+1;
        x=n;
         c=0;
        while(x>0){
            c=c+x%10;
            x=x/10;
        }
    }
    if(c%4==0){
        cout<<n;
    }
    else{
        cout<<n-1;
    }
}