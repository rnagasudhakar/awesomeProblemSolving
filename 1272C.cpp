//“ In order to be irreplaceable, one must always be different”
#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    ll x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    char a[y];
    for(ll i=0;i<y;i++){
        cin>>a[i];
        
    }
    ll v3[x];
    for(ll i=0;i<x;i++){
        v3[i]=0;
    }
    ll flg=0;
    for(ll i=0;i<x;i++){
        flg=0;
        for(ll j=0;j<y;j++){
            if(s[i]==a[j]){
                v3[i]=1;
                flg=1;
                break;
            }
        }
    }
    vll v4;
    ll k=0;
  
    for(ll i=0;i<x;i++){
        if(v3[i]==1){
            k++;
        }
        else{
            v4.pb(k);
            k=0;
        }
    }
    if(k!=0){
        v4.pb(k);
    }
    ll sum=0;
    for(ll i=0;i<v4.size();i++){
        sum+=(v4[i]*(v4[i]+1))/2;
    }
    cout<<sum;
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
