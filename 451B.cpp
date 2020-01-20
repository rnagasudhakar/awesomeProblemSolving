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
	vll a,b;
	for(ll i=0;i<x;i++){
	    ll y;
	    cin>>y;
	    a.pb(y);
	    b.pb(y);
	}
	sort(a.begin(),a.end());
	ll flg=0,k,r,l;
	ll z=0;
	for(ll i=0;i<x;i++){
	    if(a[i]==b[i]){
	        z++;
	    }
	}
    for(ll i=0;i<x;i++){
        if(a[i]!=b[i]){
            l=i;
            break;
        }
    }
    for(ll i=x-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }
  //  cout<<l<<" "<<r<<endl;
    if(z==x){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        for(ll i=0;i<=abs(r-l);i++){
            
            if(a[l+i]!=b[r-i]){
                
                flg=1;
                break;
            }
        }
        if(flg==1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<r+1<<endl;
        }
    }
	return 0;
}
		
	

	
