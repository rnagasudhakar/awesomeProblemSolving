# include <iostream>
using namespace std;
int n,m,i,j,k;
string s;
int main (){
	cin>>s;
	if (s.size()<4){
		cout<<"0";
		return 0;
	}
	for (i=0;i<s.size()-3;i++){
		if (s.substr(i,4)=="bear") k=i+1;
		j+=k;
	}
	cout<<j;
}