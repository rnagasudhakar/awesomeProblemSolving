#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int a[x];
	map <int,int> m;
	int b[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
		b[i]=0;
		m[a[i]]++;
	}
	int k=0;
	for(auto i : m){
		if(i.second>0){
			k++;
		}
	}
	b[0]=k;
	for(int i=1;i<x;i++){
		if(m[a[i-1]]==1){
			b[i]+=b[i-1]-1;
		}
		else{
			b[i]+=b[i-1];
		}
		m[a[i-1]]--;
	}

	while(y>0){
		int z;
		cin>>z;
		cout<<b[z-1]<<endl;
	y--;
}
}
	
