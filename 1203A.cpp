#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
		int y;
		cin>>y;
		int a[y];
		for(int i=0;i<y;i++){
			cin>>a[i];
		}
		int flg=1;
		for(int i=0;i<y-1;i++){
			if((abs(a[i]-a[i+1])==1)||(abs(a[i]-a[i+1])==y-1)){
				flg=1;
			}
			else{
				
				flg=0;
				break;
		}
	}
		if(flg==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
		
