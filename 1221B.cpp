#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    char a[x][x];
    int flg;
    for(int i=0;i<x;i++){
        if(i%2==0){
            flg=0;
        }
        else{
            flg=1;
        }
        for(int j=0;j<x;j++){
            if(flg==0){
                a[i][j]='W';
                a[i][j+1]='B';
                j++;
            }
            else{
                 a[i][j]='B';
                a[i][j+1]='W';
                j++;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}