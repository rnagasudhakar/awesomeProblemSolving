#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	string s;
	cin>>s;
	string ans="";
	for(int i=0;i<x-1;i++){
		if(s[i]!=s[i+1]){
			ans+=s[i];
			ans+=s[i+1];
			i++;
		}
	}
	cout<<s.size()-ans.size()<<endl<<ans;
}
			
				
