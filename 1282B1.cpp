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
    while(x--){
       ll y,p,k;
       cin>>y>>p>>k;
       ll a[y];
       for(ll i=0;i<y;i++){
           cin>>a[i];
       }
       sort(a,a+y);
       ll s=0;
       ll j=0;
       ll p1=p;
       for(ll i=1;i<y;i=i+2){
           if(p>0&&p>=a[i]){
               p-=a[i];
               s+=1;
           }
           else{
               break;
           }
       }
       ll s1=0;
    for(ll i=0;i<y;i=i+2){
           if(p1>0&&p1>=a[i]){
               p1-=a[i];
               s1+=1;
           }
           else{
               break;
           }
       }
       cout<<max(s1*2 -1,s*2 )<<endl;
    }
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	