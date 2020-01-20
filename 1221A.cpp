#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int i,j;
	for(int m=0;m<x;m++){
		long long int y;
		cin>>y;
		long long int a[y];
		for( i=0;i<y;i++){
			cin>>a[i];
		}
		int flg=1;
		int k=0;
		while((flg==1)&&(k<y)){
			i=0;j;
		for( i=0;i<y;i++){
			for( j=i+1;j<y;j++){
				if(a[i]==a[j]&&a[i]<2048){
					a[i]+=a[i];
					a[j]=0;
					break;
				}
			}
		
			if(flg==1){
			for(int i=0;i<y;i++){
			if(a[i]==2048){
				cout<<"YES"<<endl;
				flg=0;
				break;
			}
		}
	}
			
		}
		k++;
		}
		
		if(flg==1){
			cout<<"NO"<<endl;
		}
	}
	
}

		
