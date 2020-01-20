# include<bits/stdc++.h>
using namespace std;
# define ll long long
# define str string
# define vll vector<ll>
# define vstr vector<str>
# define sll set<ll>
# define mss map<str,str>
# define mci map<char,int>
int main()
{
	ll n,m,i,x,c=0;
    vll a,b;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<m;i++){
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(a.size()!=0 && b.size()!=0){
        if(a[0]<=b[0]){
            b.erase(b.begin());
            a.erase(a.begin());
        }
        else
            b.erase(b.begin());
    }
    cout<<c+a.size();
}       