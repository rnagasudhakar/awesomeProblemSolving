#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[26]={0};
    for(int i=0;i<x;i++){
        string s;
        cin>>s;
        a[s[0]-97]++;
    }
    int z=0,m;
    for(int i=0;i<26;i++){
        if(a[i]>2){
            if(a[i]%2==0){
                a[i]=a[i]/2;
            z+=2*(((a[i]-1)*a[i])/2);
            }
            else{
                m=(a[i]/2)+1;
                a[i]=a[i]/2;
                z+=((a[i]-1)*a[i])/2;
               
                z+=((m-1)*m)/2;
            }
        }
    }
    cout<<z;
}