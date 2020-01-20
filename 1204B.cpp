#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,l,r;
	cin>>x>>l>>r;
	int m=0;
	m=m+x-l+1;
	int k=0;
	int a=r;
	k=l-1;
	int y=2;
	while(k>0){
		m+=y;
		y=y*2;
		k--;
	}
	int y1=1;
	int m1=0;
	while(r-1>0){
		m1+=y1;
		y1=y1*2;
		r--;
	}
	
	while(x-a+1>0){
		m1+=y1;
		x--;
	}
	cout<<m<<" "<<m1;
}
	
