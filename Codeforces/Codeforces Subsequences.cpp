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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;

	ll n;
	cin>>n;
	ll k=n;
	ll c=0;

	ll w=1;
	ll r=0;
	ll q=pow(w,10);
	while(q<n)
	{
		w++;
		q=pow(w,10);
	}

	if(q!=n)
	{
		w=w-1;
		q=pow(w,10);
		
		while(q<n)
		{
			q=q/w;
			q*=(w+1);
			r++;
		}
	}

	//cout<<w<<" "<<r<<endl;
	// c=log2(k);
	// if(pow(2,c)!=n)
	// 	c++;

	// cout<<c<<endl;

	string dans="";
	// ll q=c/10;
	// ll r=c%10;
	
	string cp="codeforces";
	rep(j,0,10)
	{
		rep1(i,1,w)
		{
			dans+=cp[j];
		}
		if(j<r)
		{
			dans+=cp[j];
		}
	}
	
	cout<<dans<<endl;
	

	return 0;
}