#include<bits/stdc++.h>
using namespace std;
int main(){
    long double h,l;
    cin>>h>>l;
    long double k= pow(l,2)-pow(h,2);
    long double z=k/(2*h);
    cout<<fixed<<setprecision(12)<<z;
}