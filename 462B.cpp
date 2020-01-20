#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int x,k;
    cin>>x>>k;
    string s;
    cin>>s;
   long long int a[26]={0};
    for(int i=0;i<x;i++){
        a[s[i]-65]++;
    }
   long long  int m=0;
    sort(a,a+26,greater<int>());
   
        for(int i=0;i<26;i++){
            if(k>=a[i]){
                m+=a[i]*a[i];
                k=k-a[i];
            }
            else{
                m+=k*k;
                break;
            }
        }
  
    cout<<m;
}