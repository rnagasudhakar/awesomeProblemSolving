#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    int a[3];
     a[0]=s1[0]-48;
     a[1]=s2[0]-48;
     a[2]=s3[0]-48;
    sort(a,a+3);
    int flg=0;
    if(s1==s2&&s2==s3){
        cout<<0;
         flg=1;
    }
    else{
        if(s1[1]==s2[1]&&s2[1]==s3[1]){
            if(a[0]+1==a[1]&&a[1]+1==a[2]){
                cout<<0;
                flg=1;
            }
    }
     if(s1[1]==s2[1]){
        if(abs(s1[0]-s2[0])==0||abs(s1[0]-s2[0])==2||abs(s1[0]-s2[0])==1){
            if(flg==0){
            cout<<1;
             flg=1;
            }
        }
    }
      if(s2[1]==s3[1]){
        if(abs(s2[0]-s3[0])==0||abs(s2[0]-s3[0])==2||abs(s2[0]-s3[0])==1){
             if(flg==0){
            cout<<1;
             flg=1;
            }
        }
    }
      if(s1[1]==s3[1]){
        if(abs(s1[0]-s3[0])==0||abs(s1[0]-s3[0])==2||abs(s1[0]-s3[0])==1){
             if(flg==0){
            cout<<1;
             flg=1;
            }
        }
    }
     if(s1==s2){
          if(flg==0){
            cout<<1;
             flg=1;
            }
    }
     if(s2==s3){
         if(flg==0){
            cout<<1;
             flg=1;
            }
    }
     if(s1==s3){
          if(flg==0){
            cout<<1;
             flg=1;
            }
    }
    else if(flg==0){
        cout<<2;
    }
    }
}   
