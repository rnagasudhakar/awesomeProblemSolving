#include <iostream>
#include <algorithm>
using namespace std;
int a,b,c,d[200000],h,m,sum;
main(){
	cin>>a>>b;
	for (int i=0; i<a; i++) {
		cin>>d[i];
		c+=d[i]; 
			h++;
		if (c>b){
			c-=d[m];
			h--;
			m++;
		}
	}
	cout<<h;
}