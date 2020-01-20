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
    ll n,x,y,i,a,b,m;
    ll p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0;
    cin>>n>>x>>y;
    for(i=0;i<n;i++){
        cin>>a>>b;
        if(a>x && b>y){
            p1++;
        }
        else if(a<x && b>y){
            p2++;
        }
        else if(a<x && b<y){
            p3++;
        }
        else if(a>x && b<y){
            p4++;
        }
        else if(a==x && b>y){
            p5++;
        }
        else if(a==x && b<y){
            p6++;
        }
        else if(b==y && a<x){
            p7++;
        }
        else if(b==y && a>x){
            p8++;
        }
    }
    m=max(p1+p5+p2,max(p3+p6+p4,max(p1+p8+p4,p2+p7+p3)));
    cout<<m<<endl;
        if(m==p3+p7+p2){
            cout<<x-1<<' '<<y<<endl;
        }
        else if(p2+p5+p1==m){
            cout<<x<<' '<<y+1;
        }
        else if(p1+p4+p8==m){
            cout<<x+1<<' '<<y;
        }
        else{
            cout<<x<<' '<<y-1;
        }
}	
	
	
	
	
	
