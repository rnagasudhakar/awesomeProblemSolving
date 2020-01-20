//“ In order to be irreplaceable, one must always be different”
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define pi 3.14159265359
# define str string
# define vll vector<ll>
# define vstr vector<str>
# define vchar vector<char>
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
# define schar set<char>
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
#define mchar map<char, ll>
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
   while(x--){
       ll y;
       cin>>y;
       ll a[y];
       mll m;
       queue <ll> q;
       ll t;
       for(ll i=0;i<y;i++){
           cin>>t;
           if(( t % 2 == 0)&&(m.find(t)== m.end())){
               q.push(t);
               m[t]++;
           }
       }
       ll k=0;
       while(q.size()>0){
           ll x1=q.front();
           k++;
           x1=x1/2;
           q.pop();
           if(m.find(x1)==m.end()&&x1%2==0){
               q.push(x1);
               m[x1]++;
           }
       }
       cout<<k<<endl;
   }
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	