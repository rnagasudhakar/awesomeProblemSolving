#import<bits/stdc++.h>
int i=4,a[4];int main(){while(i--)scanf("%d",a+i);std::sort(a,a+4);puts(abs(a[1]+a[2]-a[3])-*a?"NO":"YES");}