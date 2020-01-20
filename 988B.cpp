#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
  
    
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
       
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
} 
int main(){
    int x;
    cin>>x;
    vector<string> v;
    for(int i=0;i<x;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    string s2;
    int k=0;
    for(int a=0;a<v.size();a++){
        for(int b=0;b<v.size();b++){
            if(v[a].size()<=v[b].size()){
            int m=isSubstring(v[a],v[b]);
        if(m==-1){
            cout<<"NO";
            return 0;
        }
        }
        }
        
    }
    cout<<"YES"<<endl;
    vector<int>v2;
    for(int i=0;i<v.size();i++){
        int z=v[i].size();
        v2.push_back(z);
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v.size();j++){
            if(v2[i]==v[j].size()){
                cout<<v[j]<<endl;
                v[j]="";
                break;
            }
        }
    }
}