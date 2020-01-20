#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int a[y];
	int e=0,o=0;
	for(int i=0;i<y;i++){
		cin>>a[i];
	}
	if(x%2==0){
		if(a[y-1]%2==0){
			cout<<"even";
		}
		else{
			cout<<"odd";
		}
	}
	else{
		for(int i=0;i<y-1;i++){
			if(a[i]%2==0){
				e++;
			}
			else{
				o++;
			}
		}
		if(o%2==0){
			if(a[y-1]%2==0){
			cout<<"even";
		}
		else{
			cout<<"odd";
		}
	}
	else{
			if(a[y-1]%2==0){
			cout<<"odd";
			}
		else{
			cout<<"even";
		}
	}
}
}
	
