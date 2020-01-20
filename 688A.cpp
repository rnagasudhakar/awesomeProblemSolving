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
    ll k1=0,k=0;
    while(y--){
        str s;
        cin>>s;
        ll flg=0;
        for(ll i=0;i<s.length();i++){
            flg=0;
            if(s[i]=='0'){
                flg=1;
                break;
            }
        }
        if(flg==1){
            k++;
        }
        else{
            k1=max(k1,k);
            k=0;
        }
    }
    k1=max(k1,k);
    cout<<k1;
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	