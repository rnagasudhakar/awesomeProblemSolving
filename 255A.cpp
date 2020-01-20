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
    ll a[x];
    for(ll i=0;i<x;i++){
        cin>>a[i];
    }
   ll s=0,s1=0,s2=0;
   for(ll i=0;i<x;i++){
       if(i<x){
       s+=a[i];
       }
       i++;
       if(i<x){
       s1+=a[i];
       }
       i++;
       if(i<x){
       s2+=a[i];
       }
   }
   if(s1>s2&&s1>s){
       cout<<"biceps";
   }
   else if(s>s1&&s>s2){
       cout<<"chest";
   }
   else{
       cout<<"back";
   }
	return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
