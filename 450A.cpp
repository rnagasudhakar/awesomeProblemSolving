#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	int b[x]={0};
	for(int i=0;i<x;i++){
		if(a[i]%y==0){
			b[i]=a[i]/y;
		}
		else{
			b[i]=a[i]/y+1;
		}
	}
	int k=b[0];
	int m=0;
	for(int i=0;i<x;i++){
		if(k<=b[i]){
			k=b[i];
			m=i+1;
		}
	}
	cout<<m;
}
