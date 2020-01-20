#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            k=0;
            if(a[i][j]=='.'){
                k++;
            }
            if(a[i][j+1]=='.'){
                k++;
            }
            if(a[i+1][j+1]=='.'){
                k++;
            }
            if(a[i+1][j]=='.'){
                k++;
            }
           
            if(k!=2){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    
    
    
}