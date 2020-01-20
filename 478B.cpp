//“ In order to be irreplaceable, one must always be different”
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma map<ll>
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
	ll a,b;
	cin>>a>>b;
	ll max=0,max1;
	ll n=a-b;
	max1=((n)*(n+1))/2;
	ll c[b];
	ll m=a/b;
	ll m1=a%b;
	max+=(b-m1)*(((m-1)*(m))/2);
		max+=m1*((m*(m+1))/2);
	cout<<max<<" "<<max1;
	return 0;
}
		
	
	
	
	
	
	
	
	
	
	
	
