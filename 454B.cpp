#include <iostream>
using namespace std;
int n,i,j,k,a[100005];
int main ()
{
	cin>>n;
	
	for (i=1; i<=n; i++)
	{
	cin>>a[i];
	
	if (i>1 && a[i]<a[i-1]) k++,j=i;
    }
 
if (k==0) cout<<0<<endl;
else
if (k==1 && a[n]<=a[1]) cout<<n-j+1<<endl;
else
cout<<-1<<endl;
 
return 0;
}