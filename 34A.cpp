#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,x,l,s;
cin>>n;
int a[n+1];
for(i=1;i<=n;i++)
cin>>a[i];
x=abs(a[n]-a[1]);
l=n;
s=1;
for(i=2;i<=n;i++) {
if(abs(a[i]-a[i-1])<x)
{
x=abs(a[i]-a[i-1]);
l=i;
s=i-1;
}
}
cout<<l<<" "<<s;
}