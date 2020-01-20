#include<iostream>
using namespace std;
int main()
{
int n,k,mi=101,ma=0,i,j;
cin>>n>>k;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
mi=min(a[i],mi);
ma=max(a[i],ma);
}
if(ma-mi>k)
{
cout<<"NO";
return 0;
}
else
{
cout<<"YES"<<endl;
for(i=0;i<n;i++)
{
for(j=1;j<=a[i];j++)
{
    cout<<j%k+1<<" ";
}
cout<<endl;
}
}
}