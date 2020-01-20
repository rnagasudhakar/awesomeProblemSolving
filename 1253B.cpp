#include <bits/stdc++.h>
using namespace std;
set <int >s;
map<int ,int >mp;
int main()
{
	ios::sync_with_stdio(false);
	int n,c=0;
	cin>>n;
	vector<int >v(n);
	vector<int >k;
	map<int ,int >cu;
	for(int i=0;i<n;i++){
			cin>>v[i];
			}
	if(n%2!=0){cout<<-1;return 0;}
	for(int i=0;i<n;i++){
		
		if(v[i]>0 && mp[v[i]]==0 && s.count(v[i])==0){
			s.insert(v[i]);
			mp[v[i]]++;
		}
		else if(v[i]<0 && mp[-v[i]]==1){
			s.erase(-v[i]);
			if(s.size()==0){
				mp.clear();
			k.push_back(i);
			c++;
			}
		}
		else{
			cout<<-1;
			return 0;
		}
	}
	if(s.size()==0){
	cout<<c<<endl;
	cout<<k[0]+1<<' ';
	for(int i=1;i<int (k.size());i++){
		cout<<k[i]-k[i-1]<<' ';
	}
	}
	else cout<<-1;
}
