#include<iostream>
#include<cstdio>
using namespace std;
const int maxn=3e5+3;
int a[maxn],b[maxn];
int main()
{
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int s1=1,s2=1,s3=0,s4=0;
	for(int i=2;i<=m;i++)
	{
		int c,d;
		cin>>c>>d;
		if(x==c||x==d) s1++;
		else s3=max(s3,max(++a[c],++a[d]));
		if(y==c||y==d) s2++;
		else s4=max(s4,max(++b[c],++b[d]));
	}
	if(s1+s3>=m||s2+s4>=m) cout<<"YES";
	else cout<<"NO";
}
 