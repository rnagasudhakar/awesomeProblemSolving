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
 ll t,x;
  
   vll v;
 bool visited[100001];
 void dfs(int n){
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
    cin>>x>>t;
    if(t==0){
        cout<<1;
        return 0;
    }
    mll ma;
    for(ll i=1;i<=t;i++){
        ll y,z;
        cin>>z>>y;
        adj[z].push_back(y);
        adj[y].push_back(z);
        ma[z]++;
        ma[y]++;
    }
    ll m1=0,m=0,k1=0;
    for(ll i=1;i<=x;i++){
        if(!visited[i]){ 
            for(ll i=1;i<=x;i++){
                if(visited[i]==true){
                    m++;
                }
            }
            k1++;
            if(m>0){
            v.push_back(m);
            }
            m=0;
            if(ma[i]>0){
            dfs(i);
            }
        }
    }
    
   ll k=1;
    m=0;
    for(ll i=1;i<=x;i++){
                if(visited[i]==true){
                    m++;
                }
            }
            if(m>0){
            v.push_back(m);
            }
            set<ll>s;
     for(ll i=0;i<v.size();i++){
         s.insert(v[i]);
     }
     vll v2;
     ll j1=0;
     for(auto i:s){
         v2.push_back(i);
        // cout<<i<<" ";
     }
     if(k1==1){
        cout<<(ll)pow(2,x-1);
    }
    else{
        k=(ll)pow(2,v2[0]-1);
        for(ll i=0;i<v2.size()-1;i++){
            k=k*(ll)pow(2,v2[i+1]-v2[i]-1);
        }
        cout<<k;
    }
	return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
