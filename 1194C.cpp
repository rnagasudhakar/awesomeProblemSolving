#include<bits/stdc++.h>
using namespace std;
int isSubSequence(string s, string t, int a, int b) 
{ 
   int j = 0;
    for (int i=0; i<b&&j<a; i++) 
       if (s[j] == t[i]) 
         j++; 
  
   return j; 
} 
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        string s,t,p;
        cin>>s>>t>>p;
        int a=s.length();
        int b=t.length();
        int c=p.length();
       
        int flg=0;
    int z=isSubSequence(s,t,a,b);
    if(z==a){
        flg=1;
    }
    int d[26]={0};
    int e[26]={0};
    int f[26]={0};
    for(int i=0;i<a;i++){
        d[s[i]-97]++;
    }
     for(int i=0;i<b;i++){
        e[t[i]-97]++;
    }
     for(int i=0;i<c;i++){
        f[p[i]-97]++;
    }
    for(int i=0;i<26;i++){
        e[i]=e[i]-d[i];
    }
    for(int i=0;i<26;i++){
        if(e[i]>0){
            if(e[i]>f[i]){
                flg=0;
                break;
            }
        }
    }
    if(flg==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}