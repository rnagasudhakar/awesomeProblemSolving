#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
 
long long int findGCD(long long int arr[], long long int n) 
{ 
   long long  int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
long long int countDivisors(long long int n) 
{ 
   long long  int cnt = 0; 
    for (long long int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++; 
  
            else 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
int main(){
	long long int x;
	cin>>x;
	long long int a[x];
	for(long long int i=0;i<x;i++){
		cin>>a[i];
	}
	long long int m=findGCD(a,x);
	long long int k=countDivisors(m);
	cout<<k;
}
