#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	vector <pair <int,int> > v;
	int h,s;
	for(int i=0;i<x;i++){
		cin>>h>>s;
		v.push_back(make_pair(h,s));
	}
	map<pair<int,int> ,int> m;
	for(int i=0;i<x;i++){
		m[v[i]]++;
	}
	int k=1;
	for(int i=0;i<x;i++){
		k=max(m[v[i]],k);
	}
	cout<<k;
}

