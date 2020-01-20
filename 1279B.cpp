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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
       ll n,s;
       cin>>n>>s;
       ll a[n];
       for(ll i=0;i<n;i++){
           cin>>a[i];
       }
      ll c=0,i=0,d=0,m=0,p=0,k,f=0;
       while(i<n){
           c+=a[i];
           d+=1;
           if(a[i]>m){
               m=a[i];
               p=i;
           }
           i+=1;
           if(c>=s){
               break;
           }
       }
       if(c>s){
           d--;
       }
         c=0,k=0;
    for (i=0;i<n;i++){
        if(i!=p){
            c=c+a[i];
            k+=1;
        }
        if(c>=s)
            break;
    }
    if(c>s){
        k-=1;
        
    }
    if(k>d){
        cout<<p+1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    }
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	