#include <iostream>
using namespace std;
int nozero (int x1){
int m=1, k=0, x=0;
while(x1>0){
    k=x1%10;
x=x+k*m;
if(k!=0) m=m*10;
x1/=10;
}
return x;
}
int main () { 
int x,y,sum;
cin>>x>>y;
sum=x+y;
if(nozero(x)+nozero(y)==nozero(sum)) 
cout<<"YES";
else cout<<"NO";
        
}