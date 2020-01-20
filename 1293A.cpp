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
# define vp vectot< pair<ll,ll> >
# define mp make_pair
# define first ff
# define second ss
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
        ll y,z,k;
        cin>>y>>z>>k;
        ll a[k];
        mll m;
        for(ll i=0;i<k;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        ll k1=z,k2=z;
        ll flg=0,flg1=0;
        ll c=0,c1=0;
        for(ll i=k1;i<=y;i++){
            if(m.find(k1)==m.end()){
                flg1=1;
               break;
            }
            k1++;
            c++;
        }
        for(ll i=k2;i>0;i--){
            if(m.find(z)==m.end() ){
                flg=1;
               break;
            }
            z--;
            c1++;
        }
        if(flg==1 && flg1==1){
            cout<<min(c,c1)<<endl;
        }
        else if(flg==1){
            cout<<c1<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
}
   

		
	
	
	
	
	
	
	
	
	
	
	