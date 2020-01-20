#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define bs binary_search
#define vl vector<ll>
#define pll pair<ll,ll>
#define vpl vector<pair<ll,ll> >
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msl map<string,ll>
#define mset memset
#define fr(a,b,c) for(int a=b;a<c;a++)
void in(ll *a,ll n){fr(i,0,n){cin>>a[i];}}
void out(ll *a,ll n){fr(i,0,n){cout<<a[i]<<" ";}}
void fast(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main(){
	fast();
	string s;
	cin>>s;
	ll fla=0;
	ll n=s.length();
	fr(i,0,n){
		if(s[i]=='h'&&fla==0){
			fla=1;
		}
		else{
			if(s[i]=='e'&&fla==1){
				fla=2;
			}
			else{
				if(s[i]=='l'&&fla==2){
					fla=3;
				}
				else{
					if(s[i]=='l'&&fla==3){
						fla=4;
					}
					else{
						if(s[i]=='o'&&fla==4){
							fla=5;
						}
					}
				}
			}
		}
	}
	if(fla==5){
		cout<<"YES\n";
	}
	else{
		cout<<"NO";
	}
}
