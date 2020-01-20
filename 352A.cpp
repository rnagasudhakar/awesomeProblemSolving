#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x];
	int s=0;
	int m=0;
	for(int i=0;i<x;i++){
		cin>>a[i];
		if(a[i]==0){
			m++;
		}
		s+=a[i];
	}
	while(s>0){
		if(s%9!=0){
			s-=5;
		}
		else{
			break;
		}
	}
	if(s%9==0&&s!=0&&m>0){
	while(s>0){
		cout<<5;
		s-=5;
	}
	for(int i=0;i<x;i++){
		if(a[i]==0){
			cout<<0;
		}
	}
	}
	else if(m>0){
		cout<<0;
	}
	else{
		cout<<-1;
	}
	
}
	
