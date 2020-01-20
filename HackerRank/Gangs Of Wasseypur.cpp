/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair
#define N 1000005

#define M 1000000007

ll dp[N];

void initailize()
{
	rep(i,0,N)
	{
		dp[i]=-1;
	}
}

ll fact(ll n)
{
	// if(dp[n]==-1)
	// {
	 	ll f=1;
		rep(i,1,n+1)
		{
			f*=i;
		}
		return f;
		//dp[n]=f;
	//}
	// return dp[n];
}


ll ncr(ll n, ll r)
{
	return fact(n)/(fact(r)*fact(n-r));
}

ll dearrangement(ll n)
{
	ll s=0;
	rep(i,0,n+1)
	{
		s+=(pow(-1,i)*fact(n)/fact(i));
	}
	
	return s;

}

////////////////////////////////////////////////////////////////////
  
// Returns nCr % p.  In this Lucas Theorem based program, 
// this function is only called for n < p and r < p. 
ll nCrModpDP(ll n, ll r, ll p) 
{ 
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    ll C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (ll i = 1; i <= n; i++) 
    { 
        // Fill entries of current row using previous 
        // row values 
        for (ll j = min(i, r); j > 0; j--) 
  
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 
  
// Lucas Theorem based function that returns nCr % p 
// This function works like decimal to binary conversion 
// recursive function.  First we compute last digits of 
// n and r in base p, then recur for remaining digits 
ll nCrModpLucas(ll n, ll r, ll p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
   // Compute last digits of n and r in base p 
   ll ni = n%p, ri = r%p; 
  
   // Compute result for last digits computed above, and 
   // for remaining digits.  Multiply the two results and 
   // compute the result of multiplication in modulo p. 
   return (nCrModpLucas(n/p, r/p, p) * // Last digits of n and r 
           nCrModpDP(ni, ri, p)) % p;  // Remaining digits 
} 
  





///////////////////////////////////////////////////////////////////////////////
















int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll n,k;
	cin>>n>>k;
	// initailize();

	// cout<<ncr(n,k)*dearrangement(k);




    cout << "Value of nCr % p is " << nCrModpLucas(n, k, M); 



////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}