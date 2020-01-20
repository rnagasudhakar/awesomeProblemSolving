#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string a;
    cin>>a;
    set <char> s;
    for(int i=0;i<x;i++){
        s.insert(a[i]);
    }
    if(x>26){
        cout<<-1;
    }
    else{
        cout<<x-s.size()<<endl;
    }
}