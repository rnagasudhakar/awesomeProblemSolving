#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int z;
	cin>>z;
	long long int a,b,x,y;
	cin>>a>>b>>x>>y;
	string s;
	cin>>s;
	int m=s.length();
	long long int flg=1;
	for(long long int i=0;i<m;i++){
		if(s[i]=='E'){
			if(a<x){
				a++;
			}
		}
		else if(s[i]=='W'){
			if(a>x){
				a--;
			}
		}
		else if(s[i]=='N'){
			if(b<y){
				b++;
			}
		}
		else if(s[i]=='S'){
			if(b>y){
				b--;
			}
		}
		if(a==x&&b==y){
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
}
		
