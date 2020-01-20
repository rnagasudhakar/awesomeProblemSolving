#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	int k=0;
	int m=a[0],n=a[0];
	for(int i=0;i<x;i++){
		if(m<a[i]){
			k++;
			m=a[i];
		}
		if(n>a[i]){
			k++;
			n=a[i];
		}
	}
	cout<<k;
}
