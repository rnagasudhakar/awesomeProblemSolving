#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        string s;
        cin>>s;
        int flg=1;
        long long int k,z=0,m1=0;
        for(int i=0;i<=y/2;i++){
            if(s[i]=='1'||s[y-1-i]=='1'){
                cout<<2*(y-i)<<endl;
                flg=0;
                break;
            }
        }
        if(flg==1){
            cout<<y<<endl;
        }
    }
}