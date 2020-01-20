#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int a[x][x];
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if(a[i][j]==0&&i==j){
				if(y>-0){
				a[i][j]=1;
				y--;
			}
			}
			else{
				if(y>1&&a[i][j]!=1){
					a[i][j]=1;
					a[j][i]=1;
					y--;
					y--;
				}
		}
	}
}
if(y>0){
	cout<<-1;
	return 0;
}
else{
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
}
