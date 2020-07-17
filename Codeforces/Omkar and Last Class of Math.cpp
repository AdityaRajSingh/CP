														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 
bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 


ll minPrimeFactor(ll n) 
{ 
    // Initialize the maximum prime factor 
    // variable with the lowest one 
    ll minPrime = INT_MAX; 
  
    // Print the number of 2s that divide n 
    if (n % 2 == 0) { 
        minPrime = 2; 
      
    } 
  
    // n must be odd at this point, thus skip 
    // the even numbers and iterate only for 
    // odd integers 
    for (ll i = 3; i <= sqrt(n); i += 2) { 
        if (n % i == 0) { 
            minPrime = i; 
  			break;
        } 
    } 
  
    // This condition is to handle the case 
    // when n is a prime number greater than 2 

  
    return minPrime; 
} 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			cout<<n/2<<" "<<n/2<<endl;
		}
		else
		{
			if(isPrime(n))
				cout<<1<<" "<<n-1<<endl;
			else
			{
				ll a=minPrimeFactor(n);
				ll  maxDivisor=n/a;
				cout<<maxDivisor<<" "<<maxDivisor*(a-1)<<endl;
			}
		}




	}	
	return 0;
}