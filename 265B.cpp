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
    cin.tie(NULL);
    ll x;
    cin>>x;
    vll v;
   while(x--){
       ll t;
       cin>>t;
       v.pb(t);
   }
  
   ll sum=0;
   sum=sum+v[0]+1;
   ll k;
   for(ll i=1;i<v.size();i++){
       if(v[i]>=v[i-1]){
           k=v[i]-v[i-1]+2;
           sum+=k;
       }
       
       else {
           sum+=v[i-1]-v[i]+2;
       }
      
   }
   cout<<sum<<endl;
	return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
