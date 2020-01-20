//“ In order to be irreplaceable, one must always be different”
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define pi 3.14159265359
# define str string
# define vll vector<ll>
# define vstr vector<str>
# define vchar vector<char>
//assign() assignes new value
//emplace(position,x) inserting
//erase(position) to remove an element
//swap() for swapping
//reverse(position,position) for reversing
# define pb push_back
# define popb pop_back
# define pf push_front
# define popf pop_front
# define sll set<ll>
# define schar set<char>
//find()
//erase(x) removes element x
//erase(position,position)
# define qll queue<ll>
# define qstr queue<str>
//front(),back()
# define stll stack<ll>
# define ststr stack<str>
//top()
# define dll deque<ll>
//at()
# define mll map<ll,ll>
#define mchar map<char, ll>
# define mstr map<str,ll>
# define mss map<str,str>
# define mci map<char,ll>
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
ll lcm(ll a, ll b)  
{  
    return (a*b)/gcd(a, b);  
}

  

// A utility funtion to find maximum of two integers 
ll max(ll a, ll b) { return (a > b)? a : b; } 

// A utility funtion to find maximum of three integers 
ll max(ll a, ll b, ll c) { return max(max(a, b), c); } 

// Find the maximum possible sum in arr[] auch that arr[m] is part of it 
ll maxCrossingSum(ll arr[], ll l, ll m, ll h) 
{ 
	// Include elements on left of mid. 
	ll sum = 0; 
	ll left_sum = INT_MIN; 
	for (int i = m; i >= l; i--) 
	{ 
		sum = sum + arr[i]; 
		if (sum > left_sum) 
		left_sum = sum; 
	} 

	// Include elements on right of mid 
	sum = 0; 
	ll right_sum = INT_MIN; 
	for (int i = m+1; i <= h; i++) 
	{ 
		sum = sum + arr[i]; 
		if (sum > right_sum) 
		right_sum = sum; 
	} 

	// Return sum of elements on left and right of mid 
	return left_sum + right_sum; 
} 

// Returns sum of maxium sum subarray in aa[l..h] 
ll maxSubArraySum(ll arr[], ll l, ll h) 
{ 
// Base Case: Only one element 
if (l == h) 
	return arr[l]; 

// Find middle point 
ll m = (l + h)/2; 

/* Return maximum of following three possible cases 
	a) Maximum subarray sum in left half 
	b) Maximum subarray sum in right half 
	c) Maximum subarray sum such that the subarray crosses the midpoint */
return max(maxSubArraySum(arr, l, m), 
			maxSubArraySum(arr, m+1, h), 
			maxCrossingSum(arr, l, m, h)); 
} 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   ll x;
   cin>>x;
   while(x--){
       ll y;
       cin>>y;
       ll a[y];
       ll s=0;
       for(ll i=0;i<y;i++){
           cin>>a[i];
           s+=a[i];
       }
     ll k=maxSubArraySum(a, 0, y-2);
     ll k1=maxSubArraySum(a, 1, y-1);
     ll m=max(k,k1);
     if(s>m){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
   }
   
}
   

		
	
	
	
	
	
	
	
	
	
	
	