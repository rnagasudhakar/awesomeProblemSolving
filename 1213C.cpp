#include<bits/stdc++.h>
using namespace std;


#define long long long 

long sumOfLastDig(long n, long m) { 

	long sum = 0, k; 

	
	k = n/m; 

	
	long arr[10]; 

	
	for (int i = 0; i < 10; i++) { 
		arr[i] = m*(i+1) % 10; 
		sum += arr[i]; 
	} 

	 
	long rem = k % 10; 


	long ans = (k/10)*sum; 

	
	for (int i = 0; i < rem; i++) { 
		ans += arr[i]; 
	} 

	return ans; 
} 



int main(){
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
	long  a,b;
	cin>>a>>b;
	cout<<sumOfLastDig(a,b)<<endl;
}
}
		
