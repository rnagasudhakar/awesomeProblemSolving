#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    string s,s1;
    s=to_string(x);
    s1=to_string(y);
   for(int i=x+1;i<100000000;i++){
       string s2;
       string s3="";
       s2=to_string(i);
       for(int j=0;j<s2.length();j++){
           if(s2[j]=='4'||s2[j]=='7'){
               s3+=s2[j];
           }
       }
       if(s3==s1){
           cout<<i;
           break;
       }
   }
}