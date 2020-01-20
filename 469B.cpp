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
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll v[10001]={0};
    while(x--){
        ll c,d;
        cin>>c>>d;
        for(ll i=c;i<=d;i++){
            v[i]=1;
        }
    }
    ll v3[10001]={0},v4[10008]={0};
    while(y--){
         ll c,d;
        cin>>c>>d;
        for(ll i=c;i<=d;i++){
            v3[i]=1;
        }
    }
    ll j=a;
    ll k=0;
    while(j<=b){
        for(ll i=0;i<10001;i++){
            if(v3[i]==1){
                v4[i+j]=1;
            }
        }
        for(ll i=0;i<10001;i++){
            if(v[i]==1&&v4[i]==1){
                k++;
                break;
            }
        }
        for(ll i=0;i<10001;i++){
            v4[i]=0;
        }
        j++;
    }
    cout<<k;
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	