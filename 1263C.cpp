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
	ll x;
	cin>>x;
	while(x--){
	    ll y;
	    cin>>y;
	    vector <ll> v;
	    set<ll>s;
	    for(ll i=1;i<=ceil(sqrt(y));i++){
	        ll max=y/i;
	        v.push_back(floor(y/i));
	        v.push_back(y/max);
	    }
	    v.push_back(0);
	    v.push_back(y);
	    v.push_back(1);
	    for(ll i=0;i<v.size();i++){
	        s.insert(v[i]);
	    }
	    cout<<s.size()<<endl;
	    for(auto i:s){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
		
	
	
	
	
	
	
	
	
	
	
	