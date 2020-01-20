#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
		long long int y,z;
		cin>>y;
		long long int k;
	    k=(y*(y+1))/2;
	 //cout<<k<<endl;
	    long long int p = (long long int)log2(y); 
	   // cout<<p<<endl;
    k-=2*(pow(2, p+1)-1);
    
 
	    cout<<k<<endl;
	}
}
