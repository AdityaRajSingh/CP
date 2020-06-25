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

void sieveOfEratosthenes(ll N, ll s[]) 
{ 
    

    vector <bool> prime(N+1, false); 
  
   
    for (ll i=2; i<=N; i+=2) 
        s[i] = 2; 
  
   
    for (ll i=3; i<=N; i+=2) 
    { 
        if (prime[i] == false) 
        { 
           
            s[i] = i; 
  
            for (ll j=i; j*i<=N; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
  
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 


ll generatePrimeFactors(ll N) 
{ 
	ll k=0,k2=0;
	ll ans=0;
    
    ll s[N+1]; 
  
    // Filling values in s[] using sieve 
    sieveOfEratosthenes(N, s); 
  
    
  
    ll curr = s[N];  // Current prime factor of N 
    ll cnt = 1;   // Power of current prime factor 
  
    // Printing prime factors and their powers 
    while (N > 1) 
    { 
        N /= s[N]; 
  
        // N is now N/s[N].  If new N als has smallest 
        // prime factor as curr, increment power 
        if (curr == s[N]) 
        { 
            cnt++; 
            continue; 
        } 
  		if(curr==2)
  			k2+=cnt;

        
  		if(curr!=2)
  			k+=cnt;
        // Update current prime factor as s[N] and 
        // initializing count as 1. 
        curr = s[N]; 
        cnt = 1; 
    }
    
    //cout<<k2<<" "<<k<<endl; 

    if(k2>1)
    {
    	//cout<<"Hello";
    	ans=1;
    }
    else 
    {
    	if(k==1)
    		ans=2;
    	else 
    		ans=1;
    }

    


    return ans;
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
		int ans=0;

		if(n==1)
		{
			ans=2;
		}
		else if(n==2)
		{
			ans=1;
		}
		else if(n%2==1)
		{
			ans=1;
		}
		else if(n%2==0)
		{

			ll l=n;
			//cout<<log2(l)<<endl;
			//cout<<pow(2,(int)log2(l))<<endl;
			ll b=log2(l);

			ll c=pow(2,(int)b);

			if(c==l)
				ans=2;
			else
			{
				ll x=0;
				while(n%2==0)
				{
					n=n/2;
					x++;
				}

				if(x>1)
					ans=1;
				else
				{
					//cout<<"Hello";
					ll q=l/pow(2,x);
					if(isPrime(q))
					{
						ans=2;
					}
					else
					{
						ans=1;
					}
				}
				//ans=generatePrimeFactors(n);
			}
			
		}
		if(ans==1)
		{
			cout<<"Ashishgup"<<endl;
		}
		else
		{
			cout<<"FastestFinger"<<endl;
		}



	}	
	return 0;
}