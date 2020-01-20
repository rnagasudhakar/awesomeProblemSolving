#include<bits/stdc++.h>
using namespace std;
 
bool isLucky(int n) 
{ 
	
	bool arr[10]; 
	for (int i=0; i<10; i++) 
		arr[i] = false; 
 
 
	while (n > 0) 
	{ 
		// Find the last digit 
		int digit = n%10; 
 
		// If digit is already seen, return false 
		if (arr[digit]) 
		return false; 
 
		// Mark this digit as seen 
		arr[digit] = true; 
 
		// REmove the last digit from number 
		n = n/10; 
	} 
	return true; 
} 
 
 
 
int main(){
    int x,y;
    cin>>x>>y;
    int flg=1;
    for(int i=x;i<=y;i++){
        if(isLucky(i)){
            cout<<i;
            flg=0;
            break;
        }
      
    }
    if(flg==1){
        cout<<-1;
    }
}
