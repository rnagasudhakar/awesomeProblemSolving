#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[2*x];
	if(x%2==0){
		cout<<"NO";
	}
	else{
		cout<<"YES"<<endl;
		for(int i=1;i<=x;i++){
			a[i]=i;
			i++;
		}
		int j=0;
		for(int i=2;i<=x;i++){
			
			a[i]=2*x-j;
			j+=2;
			i++;
		}
		int k=2;
		for(int i=x+1;i<=2*x;i++){
			a[i]=k;
			k+=2;
			i++;
		}
		int m=2*x-1;
		for(int i=x+2;i<=2*x;i++){
			a[i]=m;
			m-=2;
			i++;
		}
		for(int i=1;i<=2*x;i++){
			cout<<a[i]<<" ";
		}
	}
}	
