#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<x;i++){
		a[s[i]-97]++;
	}
	
	for(int i=0;i<a[13];i++){
		cout<<1<<" ";
	}
	for(int i=0;i<a[25];i++){
		cout<<0<<" ";
	}
}
