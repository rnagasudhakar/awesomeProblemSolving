#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s1;
    char temp;
    cin>>s>>s1;
    int k=s.length();
    int m=s1.length();
    int z=0,j,j1,flg=0;
    if(k!=m){
        cout<<"NO"<<endl;
    }
    else{
    for(int i=0;i<k;i++){
        if(s[i]!=s1[i]){
            z++;
            if(z==1){
                j=i;
            }
            else{
                j1=i;
            }
        }
    }
        if(z==2){
              temp=s[j];
            s[j]=s[j1];
            s[j1]=temp;
            
          for(int i=0;i<k;i++){
              if(s[i]==s1[i]){
                  flg=0;
              }
              else{
                  flg=1;
                  break;
              }
          }
          if(flg==0){
              cout<<"YES";
          }
          else{
              cout<<"NO";
          }
        }
        else{
            cout<<"NO";
        }
    }
}
