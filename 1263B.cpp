#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,count=0,x,a[10]={0};vector<string>v;string s;cin>>n;
		for(int i=0;i<n;i++){cin>>s;v.push_back(s);a[s[0]-'0']++;
		}
		for(int i=0;i<n;i++)
		{
		bool che=1;
		for(int j=0;j<i;j++)if(v[j]==v[i])che=0;
        if(!che)
        {
		for(int j=0;j<10;j++)
		{
			if(!a[j])
			{
				a[j]++;
				v[i][0]=j+'0';break;
			}
		}
		count++;
		}
		}	
		cout<<count<<endl;
		for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
	}
}