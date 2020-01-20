#include <iostream>
using namespace std;
main () {
	int n;
	cin>>n;
string s[28]={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

if(n<=20)
cout<<s[n];
else if(n%10==0)
cout<<s[18+n/10];
else
cout<<s[18+n/10]<<"-"<<s[n%10];
}