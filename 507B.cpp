#include <bits/stdc++.h>
using namespace std;
int main()
{
  double r,x,y,x1,y1;
  cin>>r>>x>>y>>x1>>y1;
  double d=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
  cout<<ceil(d/(2*r));
    return 0;
}