#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
ifstream fin("input.txt");
ofstream fout("output.txt");
 
int main()
{
    vector<int> vec;
    vector< pair <int,int> > vect;
    map<int,int> mps;        
    std::ios::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        vec.pb(x);
        ++mps[x];
    }
    for(int i=0; i<vec.size(); ++i)
    {
        if(vec[i]==1)
        {
            if(mps[1]>0 && mps[3]>0 && mps[6]>0)
                {
                    --mps[1];--mps[3];--mps[6];
                }
            else if(mps[1]>0 && mps[2]>0 && mps[4]>0)
                {
                    --mps[1];--mps[2];--mps[4];
                }
            else if(mps[1]>0 && mps[2]>0 && mps[6]>0)
                {
                    --mps[1];--mps[2];--mps[6];
                }
            else
                break;
        }
    }
    int flag=0;
    for(auto x : mps)
    {
        if(x.second)
        {
           ++flag;
           cout<<-1<<"\n";
            break;
        }
    }
    map<int,int> mps2;
    if(flag==0)
    {
        for(int i=0; i<vec.size(); ++i)
        {
            ++mps2[vec[i]];
        }
    }
    for(int i=0; i<vec.size(); ++i)
    {
        if(vec[i]==1)
        {
            if(mps2[1]>0 && mps2[3]>0 && mps2[6]>0)
            {
                cout<<1<<" "<<3<<" "<<6<<"\n";
                --mps2[1];--mps2[3];--mps2[6];
            }
            else if(mps2[1]>0 && mps2[2]>0 && mps2[4]>0)
                {
                    cout<<1<<" "<<2<<" "<<4<<"\n";
                    --mps2[1];--mps2[2];--mps2[4];
                }
            else if(mps2[1]>0 && mps2[2]>0 && mps2[6]>0)
                {
                    cout<<1<<" "<<2<<" "<<6<<"\n";
                    --mps2[1];--mps2[2];--mps2[6];
                }
            else
                break;
        }
    }
 
 
    
}