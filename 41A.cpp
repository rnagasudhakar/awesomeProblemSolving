#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	cin>>s>>s1;
	string s3="";
	for(int i=s1.length()-1;i>=0;i--){
		s3+=s1[i];
	}
	if(s3==s){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
