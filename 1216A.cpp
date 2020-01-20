#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	string s;
	cin>>x>>s;
	int flg=1,c=0,d=0,k=0;
	for(int i=0;i<x;i++){
	    if(s[i]=='a'){
	        d++;
	    }
	    if(s[i]=='b'){
	        c++;
	    }
	    if(i%2==1){
	        if(c!=d){
	           k+=max(c,d)/2;
	           if(s[i]=='a'){
	               s[i]='b';
	           }
	           else{
	               s[i]='a';
	           }
	        }
	        c=0,d=0;
	    }
	}
    cout<<k<<endl;
    cout<<s;
}
	
