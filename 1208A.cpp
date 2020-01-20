#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	long long int x,y,c,d;
	cin>>x>>y>>c;
	if(c%3==0){
		cout<<x<<endl;
	}
	else if(c%3==1){
		cout<<y<<endl;
	}
	else if(c%3==2){
		d=x^y;
		cout<<d<<endl; 
	}
}
}
