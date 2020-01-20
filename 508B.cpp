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

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	str s;
	cin>>s;
	ll l= s.length();
	map <char,ll> m;
	for(ll i=0;i<s.length();i++){
	    m[s[i]-48]++;
	}
	ll sum=0;
	
	for(ll j=0;j<9;j++){
	    if(j%2==0){
	        if(m[j]!=0){
	            sum+=m[j];
	        }
	    }
	}
	if(sum==0){
	    cout<<-1<<endl;
	}
	else{
	    char ch=s[l-1];
	    ll d,sum1=0;
	    for(ll i=0;i<l-1;i++){
	        if(ch>s[i]&&s[i]%2==0){
	            sum1++;
	        }
	    }
	     if(sum==1){
	    for(ll i=0;i<l;i++){
	        if((s[i]-48)%2==0){
	            d=i;
	            break;
	        }
	    }
	    char ch2=s[d];
	    s[d]=s[l-1];
	    s[l-1]=ch2;
	    //cout<<s.substr(0,d)+s[l-1]+s.substr(d+1,l-1)+s[d];
	    cout<<s;
	     }
	     else if(sum1==0){
	         d=l-2;
	         char ch2=s[d];
	    s[d]=s[l-1];
	    s[l-1]=ch2;
	    //cout<<s.substr(0,d)+s[l-1]+s.substr(d+1,l-1)+s[d];
	    cout<<s;
	     }
	     else{
	          for(ll i=0;i<l;i++){
	        if(ch>s[i]&&(s[i]-48)%2==0){
	            d=i;
	            break;
	        }
	    }
	    char ch2=s[d];
	    s[d]=s[l-1];
	    s[l-1]=ch2;
	    //cout<<s.substr(0,d)+s[l-1]+s.substr(d+1,l-1)+s[d];
	    cout<<s;
	     }
	}
	return 0;
}
		
	

	
