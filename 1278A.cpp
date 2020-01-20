# include<bits/stdc++.h>
using namespace std;
# define pi 3.14159265359
# define ll long long
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
# define pll pair<ll,ll>
# define vpll vector<pll >
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
bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 
int main(){
    ll x,i,j,k,flag;
    cin>>x;
    str s,s1;
    vector<char> v,v1;
    for(i=0;i<x;i++){
        cin>>s;
        cin>>s1;
        if(s.size()<=s1.size()){
            for(j=0;j<s.size();j++){
                v.pb(s[j]);
            }
            sort(v.begin(),v.end());
            for(j=0;j<=s1.size()-s.size();j++){
                for(k=j;k<j+s.size();k++){
                    v1.pb(s1[k]);
                }
                flag=0;
                sort(v1.begin(),v1.end());
                for(k=0;k<v1.size();k++){
                    if(v1[k]!=v[k]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }
                v1.clear();
            }
            v.clear();
            v1.clear();
            if(flag==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        v.clear();
        v1.clear();
    }
}