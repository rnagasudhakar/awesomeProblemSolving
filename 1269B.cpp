#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(n);

	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int ans=1e9;
	for(int i=0;i<n;i++){
		int d=(b[i]-a[0]+m)%m;
		vector<int> c(n);

		for(int j=0;j<n;j++)
			c[j]=(a[j]+d)%m;

		sort(c.begin(),c.end());

		if(b==c)
			ans=min(ans,d);

	}
	cout<<ans;
	return 0;
}