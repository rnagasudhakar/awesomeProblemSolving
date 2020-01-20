#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int a[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>a[i][j];
		}
	}
	int b[x][y];
	vector <int> v1,v2;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			b[i][j]=0;
		}
	}
	int k=0;
	for(int i=0;i<x-1;i++){
		for(int j=0;j<y-1;j++){
			if((a[i][j]==1)&&(a[i][j+1]==1)&&(a[i+1][j+1]==1)&&(a[i+1][j]==1)){
			   
				b[i][j]=1;
				b[i][j+1]=1;
				b[i+1][j+1]=1;
				b[i+1][j]=1;
			
				v1.push_back(i);
				v2.push_back(j);
				k++;
			}
		}
	}
	int flg=1;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
		    if(a[i][j]!=b[i][j]){
		        flg=0;
		        cout<<-1;
		        return 0;
		    }
		}
	}
	cout<<k<<endl;
	for(int i=0;i<v1.size();i++){
	    cout<<v1[i]+1<<" "<<v2[i]+1<<endl;
	}
}
				
