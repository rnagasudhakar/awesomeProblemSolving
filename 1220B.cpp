#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  

int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
int main(){
	long long int x;
	cin>>x;
	long long int a[x][x];
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cin>>a[i][j];
		}
	}
//	cout<<a[0][1]*a[0][2]<<endl;
	
	long long int m=(a[0][1]*a[0][2])/(a[1][2]);
//	cout<<m<<endl;
	long long int y=sqrt(m);
	cout<<y<<" ";
	for(int i=1;i<x;i++){
		cout<<a[0][i]/y<<" ";
	} 
	
}
	
