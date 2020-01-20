#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    string s;
    s=to_string(a);
    int k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            k++;
        }
    }
    if(k==s.length()){
        cout<<"YES";
    }
    else{
        if((a%4==0)||(a%7==0)||(a%47==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}