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
    str s;
    cin>>s;
    str s2;
    s2=s;
    set<char>set1,set2;
    vll v,v1;
    for(ll i=0;i<s.length()-1;i++){
        if(s[i]=='B'){
            v.pb(i+1);
            s[i]='W';
            if(s[i+1]=='B'){
            s[i+1]='W';
            }
        else{
            s[i+1]='B';
        }
        }
    }
    for(ll i=0;i<s.length();i++){
        set1.insert(s[i]);
    }
    if(set1.size()==1){
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return 0;
    }
    for(ll i=0;i<s2.length()-1;i++){
        if(s2[i]=='W'){
            v1.pb(i+1);
            s2[i]='B';
            if(s2[i+1]=='B'){
            s2[i+1]='W';
            }
        else{
            s2[i+1]='B';
        }
        }
    }
     for(ll i=0;i<s2.length();i++){
        set2.insert(s2[i]);
    }
    if(set2.size()==1){
        cout<<v1.size()<<endl;
        for(ll i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        return 0;
    }
    cout<<-1;
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
