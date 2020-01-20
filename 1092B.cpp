#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	sort(a,a+x);
	int k=0;
	for(int i=0;i<x;i=i+2){
		k=k+abs(a[i]-a[i+1]);
	}
	cout<<k;
}
