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
    ll x;
    cin>>x;
    while(x--){
        str s;
        cin>>s;
        ll l=s.length();
        ll k=0;
        for(ll i=0;i<l-1;i++){
            if(s[i]==s[i+1]&&s[i]!='?'){
                k=1;
                break;
            }
        }
        if(k==1){
            cout<<"-1"<<endl;
        }
        else{
            for(ll i=0;i<s.length();i++){
               // cout<<s<<endl;
                if ((i==0)&&(s[0]=='?')){
                    if(s[1]=='a'){
                        s[0]='b';
                    }
                    else{
                        s[0]='a';
                    }
                }
               else if(i==l-1&&s[l-1]=='?'){
                     if(s[l-2]=='a'){
                        s[l-1]='b';
                    }
                    else{
                        s[l-1]='a';
                    }
                }
                  else  if(s[i]=='?'){
                        if((s[i-1]=='a'&&s[i+1]=='b')||(s[i-1]=='b'&&s[i+1]=='a')){
                            s[i]='c';
                        }
                        else if((s[i-1]=='b'&&s[i+1]=='c')||(s[i-1]=='c'&&s[i+1]=='b')){
                            s[i]='a';
                        }
                        else if((s[i-1]=='a'&&s[i+1]=='c')||(s[i-1]=='c'&&s[i+1]=='a')){
                            s[i]='b';
                        }
                        else if((s[i-1]=='a')&&((s[i+1]=='a')||(s[i+1]=='?'))){
                            s[i]='b';
                        }
                        else if((s[i-1]=='b')&&((s[i+1]=='b')||(s[i+1]=='?'))){
                            s[i]='c';
                        }
                        else if((s[i-1]=='c')&&((s[i+1]=='c')||(s[i+1]=='?'))){
                            s[i]='a';
                        }
                    }
                }
            
             cout<<s<<endl;
        }
    }
	return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
