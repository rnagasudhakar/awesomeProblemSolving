//“ In order to be irreplaceable, one must always be different”
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define pi 3.14159265359
# define str string
# define vll vector<ll>
# define vstr vector<str>
# define vchar vector<char>
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
# define schar set<char>
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
#define mchar map<char, ll>
# define mstr map<str,ll>
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
    cin.tie(0);
    ll x;
    cin>>x;
    vll v;
    for(ll i=1;i*i<x+1;i++){
        if(x%i==0){
            v.pb(i);
            v.pb(x/i);
        }
    }
    ll k=1000000000001;
    ll k2=0;
   for(ll i=0;i<v.size()-1;i++){
       if(gcd(v[i],v[i+1])==1){
           k2=max(v[i],v[i+1]);
           k=min(k,k2);
       }
   }
   cout<<k2<<" "<<x/k2<<endl;
}
   

		
	
	
	
	
	
	
	
	
	
	
	