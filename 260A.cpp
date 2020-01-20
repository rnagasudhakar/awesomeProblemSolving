#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x;
	cin>>a>>b>>x;
	int k=a;
	int flg=1;
	for(int i=0;i<10;i++){
		k=a;
		k=k*10+i;
		if((k%b)==0){
			 flg=0;
			break;
		}
	}
	if(flg==1){
		cout<<-1;
	}
	else{
		cout<<k;
		for(int i=1;i<x;i++){
			cout<<0;
		}
	}
}
	
	
