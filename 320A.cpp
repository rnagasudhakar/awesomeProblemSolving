#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int k=s.length();
	int i,flg=1;
	for( i=0;i<k;i++){
		if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'){
			i+=2;
		}
		else if(s[i]=='1'&&s[i+1]=='4'){
			i++;
		}
		else if(s[i]=='1')
			{
				i+=0;
			}
		else{
			cout<<"NO";
			flg=0;
			break;
		}
	}
	if(i>=k-1&&flg==1){
		cout<<"YES";
	}
}
