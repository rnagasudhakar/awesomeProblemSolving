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
    ll x,y,x1;
    cin>>x>>y;
    x1=x;
    vll v,v1;
    for(ll i=0;i<y;i++){
        ll t;
        cin>>t;
        v.push_back(t);
        v1.pb(t);
    }
    ll k=0,k1=0;
    sort(v.begin(),v.end());
    while(x>0){
       k+=v[0];
       v[0]--;
       if(v[0]==0){
           v.erase(v.begin());
       }
       sort(v.begin(),v.end());
       x--;
    }
    sort(v1.begin(),v1.end(),greater<>());
    while(x1>0){
        k1+=v1[0];
       v1[0]--;
       if(v1[0]==0){
           v1.erase(v1.begin());
       }
       sort(v1.begin(),v1.end(),greater<>());
       x1--;
    }
    cout<<k1<<" "<<k;
    
	return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
