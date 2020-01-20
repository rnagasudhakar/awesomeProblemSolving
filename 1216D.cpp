#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
int main(){
  long long   int x;
    cin>>x;
   long long  int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    sort(a,a+x);
    int b[x]={0};
    long long int z=0;
    int k=a[x-1];
     for(int i=0;i<x;i++){
        z+=abs(a[i]-k);
        b[i]=k-a[i];
    }
    k=findGCD(b,x);
   cout<<z/k<<" "<<k<<endl;
}