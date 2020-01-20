#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int k, x,y;
	cin>>k>>x>>y;
	string s;
	cin>>s;
	int m=0;
	for(int i=k-(x);i<k;i++){
		if((s[i]=='1')&&(i!=k-(y+1))){
			m++;
		}
	}
	
	if(s[k-(y+1)]!='1'){
		m++;
	}

	cout<<m;
}
	
