#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int x;
	cin>>x;
	long long int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	long long int p=0,n=0,z=0,k=0,ne=0;
	for(int i=0;i<x;i++){
		if(a[i]<0){
			n++;
			ne+=abs(a[i]);
		}
		else if(a[i]>0){
			p++;
			k=k+a[i];
		}
		else{
			z++;
		}
	}
	long long int m=k-p+z;
	if(n%2==0){
		m=m+ne-n;
		cout<<m;
	}
	else{
		if(z==0){
		m=m+ne-n+2;
		cout<<m;
		}
	else{
		m=m+ne-n;
		cout<<m;
	}
}
}
	
