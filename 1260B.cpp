#include <bits/stdc++.h>
using namespace std;
const int M=2e5+3;
typedef long long ll;
#define  vll vector<ll>
#define  vi vector<int >
#define pb push_back 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(2*a-b<0) {cout<<"NO"<<endl;continue;}
		else if(2*b-a<0) {cout<<"NO"<<endl;continue;}
		else if((2*a-b)%3!=0) {cout<<"NO"<<endl;continue;}
		else if((2*a-b)%3!=0) {cout<<"NO"<<endl;continue;}
		else cout<<"YES"<<endl;
	}
	
}