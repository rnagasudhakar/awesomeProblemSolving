#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int y;
	cin>>y;
	
	int a[x]={0};
	for(int i=0;i<x;i++){
		int c,d;
		cin>>c>>d;
		a[i]=c*100-d;
	}
	sort(a,a+x,greater<int>());
	int k=0;
    for(int i=0;i<x;i++){
        if(a[y-1]==a[i]){
            k++;
        }
    }
	cout<<k;
}
