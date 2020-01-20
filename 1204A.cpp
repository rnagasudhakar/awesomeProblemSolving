#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int k=s.length();
	int flg=0;
	if(k%2==0){
		cout<<k/2;
	}
	else{
		for(int i=1;i<k;i++){
			if(s[i]=='1'){
				flg=1;
				cout<<k/2+1;
				break;
			}
		}
		if(flg==0){
		cout<<k/2;
	}
	}
	
}
