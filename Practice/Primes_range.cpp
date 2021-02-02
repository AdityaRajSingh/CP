														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1000000000
vector<ll> primes; 
 
void Sieve() 
{ 
    ll n = MAX; 

    ll nNew = sqrt(n); 
  
    ll marked[n/2+500] = {0}; 
    for (ll i=1; i<=(nNew-1)/2; i++) 
        for (ll j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1) 
            marked[j] = 1; 
  

    primes.push_back(2); 
 
    for (ll i=1; i<=n/2; i++) 
        if (marked[i] == 0) 
            primes.push_back(2*i + 1); 
} 
  

ll binarySearch(ll left,ll right,ll n) 
{ 
    if (left<=right) 
    { 
        ll mid = (left + right)/2; 

        if (mid == 0 || mid == primes.size()-1) 
            return primes[mid]; 

        if (primes[mid] == n) 
            return primes[mid-1]; 

        if (primes[mid] < n && primes[mid+1] > n) 
            return primes[mid]; 
        if (n < primes[mid]) 
            return binarySearch(left, mid-1, n); 
        else
            return binarySearch(mid+1, right, n); 
    } 
    return 0; 
} 

ll primeNoGreaterThan(ll x)
{
	return binarySearch(0,primes.size()-1,x); 
}

int main()
{

	
	Sieve(); 
	ll a,b;
	cin>>a>>b;

	ll a1,b1;
	if(a<0)
	{
		a1=-1*primeNoGreaterThan(abs(a)+1);
	}
	else
	{
		a1=primeNoGreaterThan(a+1);
	}

	if(b<0)
	{
		b1=-1*primeNoGreaterThan(abs(b)+1);
	}
	else
	{
		b1=primeNoGreaterThan(b+1);
	}
	
	cout<<abs(a1+b1);

	return 0;
}