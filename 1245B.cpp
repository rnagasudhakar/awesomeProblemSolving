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
    ll x;
    cin>>x;
    while(x--){
        ll y;
        cin>>y;
        ll a[3];
        for(ll i=0;i<3;i++){
            cin>>a[i];
        }
        str s;
        cin>>s;
        str s1;
        for(ll i=0;i<y;i++){
            if(s[i]=='R'&&a[1]>0){
                s1+='P';
                a[1]--;
            }
            else if(s[i]=='P'&&a[2]>0){
                s1+='S';
                a[2]--;
            }
           else  if(s[i]=='S'&&a[0]>0){
                s1+='R';
                a[0]--;
            }
            else{
                s1+='1';
            }
        }
        ll k=0;
       for(ll i=0;i<s1.length();i++){
           if(s1[i]!='1'){
               k++;
           }
       }
      // cout<<s1<<endl;
       if(k>=ceil(float(y)/2.0)){
           cout<<"YES"<<endl;
           for(ll i=0;i<s1.length();i++){
               if(s1[i]=='1'){
                   if(a[0]>0){
                       s1[i]='R';
                       a[0]--;
                   }
                   else if(a[1]>0){
                       s1[i]='P';
                       a[1]--;
                   }
                   else if(a[2]>0){
                       s1[i]='S';
                       a[2]--;
                   }
               }
           }
           cout<<s1<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    } 
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	