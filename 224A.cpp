#include<bits/stdc++.h>
using namespace std;
int main(){
	 int s1,s2,s3;
	 cin>>s1>>s2>>s3;
	double a = sqrt(s1 * s2 / s3); 
    double b = sqrt(s3 * s1 / s2); 
    double c = sqrt(s3 * s2 / s1); 
  
    
    double sum = a + b + c; 
  
    cout<< 4 * sum; 
}
