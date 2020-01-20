//“ In order to be irreplaceable, one must always be different”
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define ma map<ll>
# define pi 3.14159265359
# define str string
# define vll vector<ll>
# define vstr vector<str>
//assign() assignes new value
//emplace(position,x) inserting
//erase(position) to remove an element
//swap() for swapping
//reverse(position,position) for reversing
# define pb push_back
# define popb pop_back
# define pf push_front
# define popf pop_front
# define sll set<ll>
//find()
//erase(x) removes element x
//erase(position,position)
# define qll queue<ll>
# define qstr queue<str>
//front(),back()
# define stll stack<ll>
# define ststr stack<str>
//top()
# define dll deque<ll>
//at()
# define mll map<ll,ll>
# define mss map<str,str>
# define mci map<char,ll>
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
ll lcm(ll a, ll b)  
{  
    return (a*b)/gcd(a, b);  
}

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll x,y;
	cin>>x>>y;
	vstr v,v1;
	for(ll i=0;i<y;i++){
	    str s,s1;
	    cin>>s>>s1;
	    v.pb(s);
	    v1.pb(s1);
	}
	vstr v2;
	for(ll i=0;i<x;i++){
	    str s2;
	    cin>>s2;
	    v2.pb(s2);
	}
	ll j=0;
	for(ll i=0;i<x;i++){
	    for(ll j=0;j<y;j++){
	    if(v2[i]==v[j]||v2[i]==v1[j]){
	        if(v[j].size()>v1[j].size()){
	            cout<<v1[j]<<" ";
	            break;
	        }
	        else{
	            cout<<v[j]<<" ";
	            break;
	        }
	    }
	    }
	}
	return 0;
}
		
	

	
