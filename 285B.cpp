#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n , st , en, k;
    cin >> n >>st >> en;
    vector < ll > x;
    vector < ll > y;
    x.pb(0);
    y.pb(0);
    for( ll i = 1 ; i <= n ; i++ )
    {
        cin >> k ;
        x.pb(k);
        if( i == st )
        {
            y.pb(1);
        }
        else
        {
            y.pb(0);
        }
    }
    ll next = st ;
    k = 0;
    if( next == en)
        {
           cout << k << endl;
           return 0;
        }
    for( ll i = 1 ; i <= n ; i++)
    {
        next = x[next];
        k++;
        if( next == en)
        {
           cout << k << endl;
           return 0;
        }
        if( next == st)
        {
            cout << -1 << endl;
            return 0;
        }
        
        
    }
}