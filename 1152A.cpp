#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,aco=0,bco=0;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==1) aco++;
	}for(int i=0;i<m;i++)
	{
		cin>>b[i];
		if(b[i]%2==1) bco++;
	}
	cout<<min(aco,(m-bco))+min(bco,(n-aco));
return 0;
}
