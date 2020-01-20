#include<bits/stdc++.h>
using namespace std;
int distinct(int x){
    string s= to_string(x);
    for(int i=0;i<4;i++){
        int flg=0;
        if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i]!=s[i+3]&&s[i+1]!=s[i+2]&&s[i+1]!=s[i+3]&&s[i+2]!=s[i+3]){
            flg=1;
        }
        return flg;
    }
}
int main(){
    int x;
    cin>>x;
    while(x<9000000){
         x++;
        int k= distinct(x);
        if(k==1){
            break;
        }
       
    }
    cout<<x;
    
}