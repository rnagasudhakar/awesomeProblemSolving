#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
    cin >> n;
    int a[n][n];
    int cur = 1;
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            if(j % 2 == 0) {
                a[i][j] = cur++;
            }
            else {
                a[n - 1 - i][j] = cur++;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) 
            cout << a[i][j] << " ";
        cout << endl;
    }
	
	return 0;
}
    