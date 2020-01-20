#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
ifstream fin("input.txt");
ofstream fout("output.txt");
 
int main()
{
    std::ios::sync_with_stdio(false);
    //cin.tie(NULL);
 	int n,m;
 	fin>>n>>m;
 	if(n>m)
 	{
 		while(n--)
 		{
 			fout<<'B';
 			if(m>0)
 				fout<<'G';
 			--m;
 		}
 	}   
 	else
 	{
 		while(m--)
 		{
 			fout<<'G';
 			if(n>0)
 				fout<<'B';
 			--n;
 		}
 	}
}