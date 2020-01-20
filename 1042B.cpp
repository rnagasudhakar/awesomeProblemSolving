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
  
	int n;
	cin>>n;
    map<string,ll> q;
    
    q["A"]=999999999;
    q["B"]=999999999;
    q["C"]=999999999;
    q["AB"]=999999999;
    q["BC"]=999999999;
    q["AC"]=999999999;
    q["ABC"]=999999999;
  
        for(int i=0;i<n;i++)
        {
			   int m;
			   string s;
			   cin>>m>>s;
			   sort(s.begin(),s.end());
			   if(q[s]>m)
			      q[s]=m;
			   
			}
			ll ans=999999999;
			ans=min((q["A"]+q["B"]+q["C"]),ans);
			ans=min((q["AB"]+q["C"]),ans);
			ans=min((q["AB"]+q["BC"]),ans);
			ans=min((q["AB"]+q["AC"]),ans);
			ans=min((q["AC"]+q["BC"]),ans);
			ans=min((q["BC"]+q["A"]),ans);
			ans=min((q["AC"]+q["B"]),ans);
			ans=min(q["ABC"],ans);
			if(ans==999999999)
			 cout<<-1<<"\n";
			 else
			 cout<<ans<<"\n";
    
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	