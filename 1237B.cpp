# include<bits/stdc++.h>
using namespace std;
# define ll int
# define str string
# define vll vector<ll>
# define vstr vector<str>
# define pb push_back
# define qll queue<ll>
# define qstr queue<str>
# define stll stack<ll>
# define ststr stack<str>
# define dll deque<ll>
# define sll set<ll>
# define mss map<str,str>
# define mci map<char,ll>
# define pll pair<ll,ll>
int main(){
    ll n,i,mi,x,s=0;
    cin>>n;
    vll a,b;
    vector<pair<ll,ll> > c;
    pll p;
    for(i=0;i<n;i++){
        a.push_back(0);
        b.push_back(0);
    }
    for(i=0;i<n;i++){
        cin>>x;
        a[x-1]=i;
    }
    for(i=0;i<n;i++){
        cin>>x;
        b[x-1]=i;
    }
    for(i=0;i<n;i++){
        p.first=a[i];
        p.second=b[i];
        c.push_back(p);
    }
    sort(c.begin(),c.end());
    mi=c[0].second;
    for(i=1;i<n;i++){
        if(mi>c[i].second){
            s++;
        }
        mi=max(mi,c[i].second);
    }
    cout<<s;
}       
