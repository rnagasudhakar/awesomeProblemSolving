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
       str s1;
       cin>>s1;
       set<ll>s;
       for(ll i=0;i<s1.length();i++){
           if((i+4<s1.length())&&(s1[i]=='t'&&s1[i+1]=='w'&&s1[i+2]=='o'&&s1[i+3]=='n'&&s1[i+4]=='e')){
               s.insert(i+3);
               i+=4;
           }

          else if((i+2<s1.length())&&(s1[i]=='o'&&s1[i+1]=='n'&&s1[i+2]=='e')){
               s.insert(i+2);
           }
          else if((i+2<s1.length())&&(s1[i]=='t'&&s1[i+1]=='w'&&s1[i+2]=='o')){
               s.insert(i+2);
           }
           
       }
       cout<<s.size()<<endl;
       for(auto i:s){
           cout<<i<<" ";
       }
       cout<<endl;
   }
    return 0;
}
   

		
	
	
	
	
	
	
	
	
	
	
	