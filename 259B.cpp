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
    ll a[3][3];
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    ll s1,s2,s3;
    s1=a[0][1]+a[0][2];
    s2=a[1][0]+a[1][2];
    s3=a[2][0]+a[2][1];
    ll k=(s1+s2+s3)/2;
    a[0][0]=k-s1;
    a[1][1]=k-s2;
    a[2][2]=k-s3;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
