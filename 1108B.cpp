#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x];
	int b[10001]={0};
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	sort(a,a+x);
	int k=a[x-1];
	vector<int> v;
	for(int i=0;i<x;i++){
		if(k%a[i]==0&&k!=a[i]){
			v.push_back(a[i]);
			a[i]=0;
		}
	}
	sort(a,a+x);
	if(a[x-2]!=0){
	cout<<a[x-1]<<" "<<a[x-2];
		}
		else{
			for(int i=0;i<v.size();i++){
				b[v[i]]++;
			}
			for(int i=10000;i>=0;i--){
				if(b[i]>1){
					cout<<a[x-1]<<" "<<i;
					break;
				}	
}
}
}
	
	
