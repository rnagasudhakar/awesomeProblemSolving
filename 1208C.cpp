#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x][x];
	int k=0;
	for(int i=0;i<x/2;i++){
		for(int j=0;j<x/2;j++){
			a[i][j]=k;
			k++;
			a[i][j+x/2]=k;
			k++;
			a[i+x/2][j]=k;
			k++;
			a[i+x/2][j+x/2]=k;
			k++;
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
