//� In order to be irreplaceable, one must always be different�
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
    cin.tie(0);
    ll x;
    cin>>x;
    ll a[x],b[x];
    mll m;
    for(ll i=0;i<x;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    queue <ll> q;
    vll v;
    for(ll i=x;i>=0;i--){
        if(m.find(i)==m.end()){
            q.push(i);
        }
    }
    ll temp;
    for(ll i=0;i<x;i++){
        if(a[i]==0){
            if(q.front()!=i+1){
                ll x=q.front();
                a[i]=q.front();
                q.pop();
                temp=i;
            }
            else if(q.size()==1){
                a[i]=q.front();
                swap(a[i],a[temp]);
                
            }
            else{
                 ll x=q.front();
                q.pop();
                a[i]=q.front();
                q.pop();
                q.push(x);
                temp=i;
            }
        }
    }
    for(ll i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	