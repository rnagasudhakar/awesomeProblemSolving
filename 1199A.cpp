#include<bits/stdc++.h>
using namespace std;
 
int a[100010];
 
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int flag=1;
		for(int j=i-1;j>=i-x&&j>0;j--)
		{
			if(a[j]<=a[i]) flag=0;
		}
		for(int j=i+1;j<=i+y&&j<=n;j++)
		{
			if(a[j]<=a[i]) flag=0;
		}
		if(flag==1)
		{
			cout<<i;
			return 0;
		}
	}
}