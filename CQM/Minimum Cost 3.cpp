#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define mk make_pair
#define N 1000000000039




ll gcdExtended(ll a, ll b, ll *x, ll *y); 
  
// Function to find modulo inverse of b. It returns 
// -1 when inverse doesn't 
ll modInverse(ll b) 
{ 
    ll x, y; // used in extended GCD algorithN 
    ll g = gcdExtended(b, N, &x, &y); 
  
    // Return -1 if b and N are not co-priNe 
    if (g != 1) 
        return -1; 
  
    // N is added to handle negative x 
    return (x%N + N) % N; 
} 
  
// Function to compute a/b under modlo m 
ll modDivide(ll a, ll b) 
{ 
    a = a % N; 
    ll inv = modInverse(b); 
    if (inv == -1) 
       cout << "Division not defined"; 
    else
       return (inv * a) % N; 
} 
  
// C function for extended Euclidean Algorithm (used to 
// find modular inverse. 
ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    ll x1, y1; // To store results of recursive call 
    ll gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
}





ll power(ll x, ll y) 
{ 
    ll res = 1;     
  
    x = x % N;  
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % N; 
        y = y>>1;
        x = (x*x) % N;   
    } 
    return res; 
} 


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,k,n;
	cin>>t;
	while(t--)
	{
		ll s=0;
		cin>>k>>n;
		if(n%k==0)
		{
			ll q;
			if(n>N)
			{
				q=modDivide(n,k);
			}
			else
			{
				q=n/k;
			}
			ll p=power(q,2);
			rep(i,1,k)
			{
				s+=(p%N);
				s=s%N;
			}
			cout<<s<<endl;
		}
		else
		{
			ll q;
			if(n>N)
			{
				q=modDivide(n,k);
			}
			else
			{
				q=n/k;
			}
			ll r=n%k;
			ll p=power(q+1,2);
			rep(i,1,r)
			{
				s+=(p%N);
				s=s%N;
			}
			p=power(q,2);
			rep(i,r+1,k)
			{
				s+=(p%N);
				s=s%N;
			}
			cout<<s<<endl;
		}
	}	






	
	return 0;
}