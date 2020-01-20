#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	
	for(int i=0;i<x;i++){
		int y,z;
		cin>>y>>z;
		
		int m;
		while(y>0){
			
				for(char i='a';i<'a'+z;i++){
					cout<<i;
				}
			 m=y-z;
			if(m>z){
				y-=z;
			}
			else{
				break;
			}
		}
		for(char i='a';i<'a'+m;i++){
			cout<<i;
		}
		cout<<endl;
	}
}		
			
			
