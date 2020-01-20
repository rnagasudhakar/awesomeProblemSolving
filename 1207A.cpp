#include<bits/stdc++.h>
using namespace std;
int main(){
	int c;
	cin>>c;
	for(int i=0;i<c;i++){
	int x,y,z;
	cin>>x>>y>>z;
	int a,b;
	cin>>a>>b;
	int m=x/2;
	int k=0;
	if(a>b&&m>=y){
		k+=a*y;
		m-=y;
		if(m>0){
			k+=min(m,z)*b;
			m=0;
	}
}
	else if(b>a&&m>=z){
		k=k+b*z;
		m-=z;
		if(m>0){
			k+=min(m,y)*a;
			m=0;
	}
}
	if(a>b&&m<y){
		k+=a*m;
	}
	else if(b>a&&m<z){
		k+=b*m;
	}
	if(a==b){
		k+=min(m,y+z)*a;
	}
	cout<<k<<endl;
}
}
	
		
