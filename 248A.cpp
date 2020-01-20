#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int l=0,k=0;
	for(int i=0;i<x;i++){
		int a,b;
		cin>>a>>b;
		if(a==1){
			k++;
		}
		if(b==1){
			l++;
		}
	}
	int c=min(k,x-k);
	int d=min(l,x-l);
	cout<<c+d;
}
	
