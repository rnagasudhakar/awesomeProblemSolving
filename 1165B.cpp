#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	sort(a,a+x);
	int pos=1;
	for(int i=0;i<x;i++){
		if(a[i]>=pos){
			pos++;
		}
	}
	cout<<pos-1;
}
