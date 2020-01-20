    #include<bits/stdc++.h>
    #define ll long long 
    using namespace std;
    int main()
    {
    ll int t,i,j,m,n,b,k,ans=INT_MAX;
    cin>>t;
    ll p,q;
    while(t--)
    {
    ans=INT_MAX;
    cin>>n>>m;
    ll x[n]={0},y[m]={0};
    char a[n][m];
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    cin>>a[i][j];
    if(a[i][j]=='*')
    {
    x[i]++;
    y[j]++;
    }
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    k=(x[i]+y[j]);
    if(a[i][j]=='*')
    k--;
    ans=min(n+m-1-k,ans);
    }
    }
    cout<<ans<<"\n";
    }
    return 0;
    }