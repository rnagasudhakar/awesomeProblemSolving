#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
 
bool check(map<int,vector<int> > mapp){
    for(auto i:mapp)if(mapp[i.first].size()%2)return false;
    return true;
}
 
int main(){
	FIO
 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	map<int,vector<int> > mapp;
	int n;cin>>n;
	for(int i=0;i<2*n;i++){
	    int a;cin>>a;
	    mapp[a].push_back(i+1);
	}
	if(check(mapp)){
	    for(auto i:mapp){
	        for(auto j=mapp[i.first].begin();j!=mapp[i.first].end();j+=2)cout<<*j<<" "<<*(j+1)<<"\n"; 
	    }
	}
	else cout<<-1;
}