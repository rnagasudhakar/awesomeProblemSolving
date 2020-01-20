#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int k=0;
	if(a==b){
		k=a+b+2*c;
		cout<<k;
	}
	else{
		k=2*min(a,b)+2*c+1;
		cout<<k;
	}
}
