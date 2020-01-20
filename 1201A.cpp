#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>m>>n;
	string s;
	int a[n]={0},b[n]={0},c[n]={0},d[n]={0},e[n]={0};
	int q[n];
	for(int i=0;i<m;i++){
		cin>>s;
		for(int j=0;j<n;j++){
			if(s[j]=='A'){
				a[j]++;
			}
			
			
			
			
			else if(s[j]=='B'){
				b[j]++;
			}else if(s[j]=='C'){
				c[j]++;
			}else if(s[j]=='D'){
				d[j]++;
			}else if(s[j]=='E'){
				e[j]++;
			}
		}
	}
		int k=0,sua=0;
		for(int i=0;i<n;i++) {
			cin>>q[i];
			a[i]=a[i]*q[i];
			
			b[i]=b[i]*q[i];
			c[i]=c[i]*q[i];
			
			
			
			d[i]=d[i]*q[i];
			e[i]=e[i]*q[i];
		}
		for(int i=0;i<n;i++){
			k=0;
			k=max(a[i],b[i]);
			k=max(k,c[i]);
			k=max(k,d[i]);
			k=max(e[i],k);
			sua=sua+k;
		}
		cout<<sua;
	}
