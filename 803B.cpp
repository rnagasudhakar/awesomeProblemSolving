#include<bits/stdc++.h>
using namespace std;
int main(){
long long 	int x;
	cin>>x;
long long 	int a[x];
	long long int b[x]={0};
	vector <long long int> v;
	for(long long int i=0;i<x;i++){
		cin>>a[i];
		if(a[i]==0){
			v.push_back(i);
		}
	}
	int count=0;
	int f1,f2;
	f1=v[0];
	f2=v[0];
	for(int i=0;i<x;i++){
		if(a[i]!=0){
			cout<<min(abs(f1-i),abs(f2-i))<<" ";
		}
		else{
			count++;
			cout<<0<<" ";
			f1=f2;
			if(count<v.size()){
				f2=v[count];
			}
		}
	}
}
		
			
	
	
	
