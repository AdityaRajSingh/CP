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


void sieveOfEratosthenes(int N, int s[]) 
{ 
	
	vector <bool> prime(N+1, false); 

	for (int i=2; i<=N; i+=2) 
		s[i] = 2; 

	// For odd numbers less then equal to n 
	for (int i=3; i<=N; i+=2) 
	{ 
		if (prime[i] == false) 
		{ 
			// s(i) for a prime is the number itself 
			s[i] = i; 

			// For all multiples of current prime number 
			for (int j=i; j*i<=N; j+=2) 
			{ 
				if (prime[i*j] == false) 
				{ 
					prime[i*j] = true; 

					// i is the smallest prime factor for 
					// number "i*j". 
					s[i*j] = i; 
				} 
			} 
		} 
	} 
} 

// Function to generate prime factors and its power 
void generatePrimeFactors(int N) 
{ 
	// s[i] is going to store smallest prime factor 
	// of i. 
	int s[N+1]; 

	// Filling values in s[] using sieve 
	sieveOfEratosthenes(N, s); 

	printf("Factor Power\n"); 

	int curr = s[N]; // Current prime factor of N 
	int cnt = 1; // Power of current prime factor 

	// Printing prime factors and their powers 
	while (N > 1) 
	{ 
		N /= s[N]; 

		// N is now N/s[N]. If new N als has smallest 
		// prime factor as curr, increment power 
		if (curr == s[N]) 
		{ 
			cnt++; 
			continue; 
		} 

		printf("%d\t%d\n", curr, cnt); 

		// Update current prime factor as s[N] and 
		// initializing count as 1. 
		curr = s[N]; 
		cnt = 1; 
	} 
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
		ll p2=0;
		ll p3=0;
		ll c=n;
		while(c%2==0)
		{
			c=c/2;
			p2++;
		}
		c=n;
		while(c%3==0)
		{
			c=c/3;
			p3++;
		}
		//cout<<p2<<" "<<p3<<endl;
		ll ans=-1;
		if(pow(2,p2)*pow(3,p3)!=n)
		{
			ans=-1;
		}
		else
		{
			if(p2>p3)
			{
				ans=-1;
			}
			else if(p2==p3)
			{
				ans=p2;
			}
			else
			{
				ans=p3;
				ans+=(p3-p2);
			}
		}
		cout<<ans<<endl;



	}	
	return 0;
}


