#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),f(n+1,0);
        for(int i=0;i<n;i++){    cin>>v[i]; f[v[i]]++;  }
        sort(f.begin(),f.end());
        int sum = f[n];
        for(int i=n-1;i>=1;i--){
            if(f[i]>=f[i+1])    f[i]=f[i+1]-1;
            if(f[i]>0)  sum+=f[i];
        }
        cout<<sum<<"\n";
    }
}