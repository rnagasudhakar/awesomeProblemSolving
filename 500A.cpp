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
vector <ll> adj[100001];
 ll t;
 bool visited[100001];
 bool dfs(int n){
     visited[n]=true;
     for(ll i=0;i<adj[n].size();i++){
         if(!visited[adj[n][i]]){
             visited[adj[n][i]]=true;
             dfs(adj[n][i]);
         }
     }
 }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin>>x>>t;
    ll a[x];
    for(ll i=1;i<x;i++){
        ll y;
        cin>>y;
        adj[i].push_back(i+y);
    }
    dfs(1);
    if(visited[t]==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}
		
	
	
	
	
	
	
	
	
	
	
	
