#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define sll set<ll>
#define str string
#define rev reverse
#define mp make_pair
#define pb push_back
#define acc accumulate
#define vll vector<ll>
#define eb emplace_back
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll> >
#define map map<ll,ll>;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,i,j,c=0;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]!=-1 && a[j]!=-1 && a[j]%a[i]==0)
            {
                a[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}
