
/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;
typedef unsigned long long int ulli; 


#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair


vector<ulli> sieve(ulli n) 
{ 
    // Create a boolean vector "prime[0..n]" and 
    // initialize all entries it as true. A value 
    // in prime[i] will finally be false if i is 
    // Not a prime, else true. 
    vector<bool> prime(n + 1, true); 
  
    prime[0] = false; 
    prime[1] = false; 
    int m = sqrt(n); 
  
    for (ulli p = 2; p <= m; p++) { 
  
        // If prime[p] is not changed, then it 
        // is a prime 
        if (prime[p]) { 
  
            // Update all multiples of p 
            for (ulli i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // push all the primes into the vector ans 
    vector<ulli> ans; 
    for (int i = 0; i < n; i++) 
        if (prime[i]) 
            ans.push_back(i); 
    return ans; 
} 
  
vector<ulli> sieveRange(ulli start, ulli end) 
{ 
    // find primes from [0..end] range 
    vector<ulli> ans = sieve(end); 
  
    // Find index of first prime greater than or 
    // equal to start 
    // O(sqrt(n)loglog(n)) 
    int lower_bound_index = lower_bound(all(ans), start) -  
                                              ans.begin(); 
  
    // Remove all elements smaller than start. 
    // O(logn) 
    ans.erase(ans.begin(), ans.begin() + lower_bound_index); 
  
    return ans; 
} 


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ulli t,l,r;
	cin>>t;
	while(t--)
	{
		ulli s=0;
	cin>>l>>r;
		ulli start =l; 
    ulli end = r; 
    vector<ulli> ans = sieveRange(start, end); 
    for (auto j : ans) 
			s=s+__builtin_popcount (j);
	
	
	cout<<s<<endl;
	}




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}