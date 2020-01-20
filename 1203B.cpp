#include <bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin>>x;
   for(int i=0;i<x;i++){
int f=0,n,m;

cin>>n;
n=n*4;
m=n/2;
map<int ,int >m1;
int c[n+1]={0},d[m+1]={0};
for(int i=1;i<=n;i++){
cin>>c[i];
m1[c[i]]++;
}
sort(c,c+n+1);
int j=1;
for(int i=1;i<n+1;i++){
if(i%2==0){
d[j]=c[i];
j++;
}if(m1[c[i]]%2!=0){
f=1;
cout<<"NO"<<endl;
break;
}
}
if(f==0){
int g=d[1]*d[m];
for(int i=1;i<=m/2;i++){
if(d[i]*d[m-i+1]!=g){
f=1;

cout<<"NO"<<endl;
break;
}
}
}
if(f==0) cout<<"YES"<<endl;

}
}



