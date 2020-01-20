#include<bits/stdc++.h>
using namespace std;
long long int isprime(int n){
	long long int k=2;
	for(long long int i=2;i<=int(sqrt(n));i++){
		if(n%i==0){
			k=1;
			break;
		}
	}
	if(k==2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	 ios::sync_with_stdio(0);
	cin.tie(0);
	long long int x;
	cin>>x;
	long long int a[x];
	for(long long int i=0;i<x;i++){
		cin>>a[i];
	}
	for(long long int i=0;i<x;i++){
		long double r=sqrt(a[i]);
		
		 if((r-floor(sqrt(a[i])))==0){
			long long int m=isprime(int(sqrt(a[i])));
			if(m==1&&a[i]!=1){
			cout<<"YES"<<endl;
			}
		else{
			cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
			}
		}
	}

			
	
		
