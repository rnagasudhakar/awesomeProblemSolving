#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[7];
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	while(x>0){
		for(int i=0;i<7;i++){
			if(x>a[i]){
				x=x-a[i];
			}
			else{
				cout<<i+1;
				x=x-a[i];
				break;
			}
		}
	}
}
