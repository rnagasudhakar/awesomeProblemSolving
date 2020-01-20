#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
    int a,b,c,m=0,m1=0;
    cin>>a>>b>>c;
    int a1=a,b1=b,c1=c;
    while(b>0&&c>1){
        if(b>=1&&c>=2){
            m+=3;
            b-=1;
            c-=2;
        }
    }
    while(a>0&&b>1){
        if(a>=1&&b>=2){
            m+=3;
            a--;
            b-=2;
        }
    }
        while(a1>0&&b1>1){
        if(a1>=1&&b1>=2){
            m1+=3;
            a1--;
            b1-=2;
        }
    }
     while(b1>0&&c1>1){
        if(b1>=1&&c1>=2){
            m1+=3;
            b1-=1;
            c1-=2;
        }
    }
    cout<<max(m,m1)<<endl;
}
}
