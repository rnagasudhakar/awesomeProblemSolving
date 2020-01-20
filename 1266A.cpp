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
        str s;
        cin>>s;
        ll flg=0,flg1=0;
        ll c1=0,c2=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='0'){
                c1++;
            }
            if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'){
                c2++;
            }
        }
        if((c1>0&&c2>0)||(c1>1)){
            flg=1;
        }
        ll k=0;
        for(ll i=0;i<s.length();i++){
            k+=s[i]-48;
        }
        if(k%3==0){
            flg1=1;
        }
         if(flg==1&&flg1==1){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}

		
	
	
	
	
	
	
	
	
	
	
	
