#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x];
	int s=0;
	for(int i=0;i<x;i++){
		cin>>a[i];
		s=s+a[i];
	}
	int m=x+1;
	int z=5;
	int k=0;
	while(z>0){
		if((z+s)%m!=1){
			k++;
		}
		z--;
	}
		cout<<k;
}
	
	
