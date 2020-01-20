#include<bits/stdc++.h>
using namespace std;
int isPrime(int n) 
{ 
    if (n <= 1) 
        return 0; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return 0; 
  
    return 1; 
} 
  
int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    int i;
    for( i=x+1;i<=y;i++){
        int k=isPrime(i);
        if(k==1){
            break;
        }
    }
    if(i==y){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}