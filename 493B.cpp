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
    ll x;
    cin>>x;
    vll v,v1;
    ll m1;
   for(ll i=0;i<x;i++){
        ll y;
        cin>>y;
        if(y>0){
            v.pb(y);
        }
        else{
            v1.pb(-1*y);
        }
        if(i==x-1){
            if(y>0){
                m1=1;
            }
            else{
                m1=0;
            }
        }
    }
    ll s=0,s1=0;
    for(ll i=0;i<v.size();i++){
        s+=v[i];
    }
    for(ll i=0;i<v1.size();i++){
        s1+=v1[i];
    }
    if(s>s1){
        cout<<"first";
        return 0;
    }
    else if(s1>s){
        cout<<"second";
        return 0;
    }
    else{
        ll m=min(v.size(),v1.size());
        for(ll i=0;i<m;i++){
            if(v[i]>v1[i]){
                cout<<"first";
                return 0;
            }
            else if(v1[i]>v[i]){
                cout<<"second";
                return 0;
            }
        }
        if(v.size()>v1.size()){
            cout<<"first";
                return 0;
        }
        else if(v.size()<v1.size()){
            cout<<"second";
            return 0;
        }
        else{
            if(m1==1){
                cout<<"first";
                return 0;
            }
            else{
                cout<<"second";
                return 0;
            }
        }
    }
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	