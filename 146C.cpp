#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    int k=0,m=0,m1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s1[i]){
            k++;
        }
        else{
           if(s[i]=='7'){
               m++;
           }
           else{
               m1++;
           }
        }
    }
   cout<<min(m,m1)+abs(m-m1);
}