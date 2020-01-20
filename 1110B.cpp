#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,z,y;
	cin>>x>>z>>y;
	int a[x];
	int b[x+1]={0};
	int k=0;
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	for(int i=1;i<=x;i++){
		b[i]=abs(a[i]-a[i-1])-1;
	}
	sort(b+1,b+x);
	for(int i=1;i<=x-y;i++){
		k=k+b[i];
	}
	cout<<k+x;
}
