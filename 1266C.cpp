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
    ll a[x][y];
    ll j=2;
    for(ll i=0;i<y;i++){
        a[0][i]=j;
        j++;
    }
    ll j1=y+2;
    for(ll i=1;i<x;i++){
        for(ll j=0;j<y;j++){
            a[i][j]=j1*a[0][j];
        }
        j1++;
    }
    if(y==1&&x==1){
        cout<<0;
        return 0;
    }
    if(y==1){
        for(ll i=0;i<x;i++){
            cout<<i+2<<endl;
        }
        return 0;
    }
    for(ll i=0;i<x;i++){
        for(ll j=0;j<y;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
