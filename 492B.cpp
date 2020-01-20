#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define pb push_back
int main(){
    fast;
    ll n,l;
    cin>>n>>l;
    ll a[n];
    fr(i,0,n) cin>>a[i];
    sort(a,a+n);
    ll dif1=a[0],dif2=l-a[n-1];
    //cout<<dif1<<" "<<dif2<<endl;
    ll dif0=fmax(dif1,dif2);
    ll dif=0;
    fr(i,0,n-1){
        ll d=a[i+1]-a[i];
        if(d>dif) dif=d;
    }
    //cout<<"dif0="<<dif0<<endl;
    //cout<<"dif/2="<<dif/2<<endl;
    //double ans=fmax(double(dif/2),dif0);
    double ans;
    double diff=double(dif)/2;
    if(diff>=dif0) ans=diff;
    else ans=dif0;
    cout<<setprecision(10)<<fixed;
    cout<<ans;
    return 0;
}
