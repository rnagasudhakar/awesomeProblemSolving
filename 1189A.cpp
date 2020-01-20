#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    
    int o=0,e=0;
    for(int i=0;i<k;i++){
        if(s[i]=='1'){
            o=o+1;
        }
        else{
            e=e+1;
        }
    }
    
    if(o!=e){
        cout<<1<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<s.substr(0,1)<<" "<<s.substr(1,k);
    }
}