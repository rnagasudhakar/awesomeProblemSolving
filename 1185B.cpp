#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int k=s1.length();
        int m=s2.length();
        int j=0;
        int t=0;
        if(k>m){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<m;i++){
                if(s2[i]==s1[j]){
                    j=j+1;
                }
                else if(s2[i]==s2[i-1]){
                    ;
                }
                else{
                    t=1;
                    break;
                }
            }
            if((t==1)||(j!=k)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}