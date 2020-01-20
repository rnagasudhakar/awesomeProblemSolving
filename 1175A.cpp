#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        long long int k=0;
        long long int a,b;
        cin>>a>>b;
        if(a>=b){
        while(a!=0){
            if(a%b==0){
                k++;
                a=a/b;
            }
            else{
                 k=k+a%b;
                a=a-a%b;
               
            }
        }
        cout<<k<<endl;
    }
    else{
        cout<<a<<endl;
    }
    }
}