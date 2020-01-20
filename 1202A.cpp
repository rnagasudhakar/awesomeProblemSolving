#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        string s,s1;
        cin>>s>>s1;
        int k=s.length();
        int k1=s1.length();
        int z=0;
        for(int i=k1-1;i>0;i--){
            if(s1[i]!='1'){
                z++;
            }
            else{
                break;
            }
        }
        int m=0;
        int flg=0;
        for(int i=k-1-z;i>0;i--){
            if(s[i]!='1'){
                m++;
            }
            else{
                cout<<m<<endl;
                flg=1;
                break;
            }
        }
        if(flg==0){
            cout<<m<<endl;
        }
    }
}