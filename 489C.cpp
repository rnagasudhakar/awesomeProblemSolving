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
    ll a,b;
    cin>>a>>b;
    if(b==0&&a==1){
        cout<<0<<" "<<0;
        return 0;
    }
    if(b==0&&a!=0){
        cout<<-1<<" "<<-1;
        return 0;
    }
    str s2;
   if(b>9*a){
       cout<<-1<<" "<<-1;
       return 0;
       s2="-1";
   }
   else{
       while(b-9>0){
           s2+='9';
           b-=9;
       }
       if(b>0){
           str s3=to_string(b);
           s2+=s3;
       }
       for(ll i=s2.length();i<a;i++){
           s2+='0';
       }
   }
   str s;
   for(ll i=s2.length()-1;i>=0;i--){
       s+=s2[i];
   }
   if(s[0]=='0'){
   for(ll i=0;i<s.length();i++){
       if(s[i]!='0'){
           s[i]=s[i]-1;
           break;
       }
   }
   }
    if(s[0]=='0'){
       s[0]='1';
   }
   cout<<s<<" "<<s2;
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	