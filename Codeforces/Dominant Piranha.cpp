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
	
	ll t,n; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		int f=0;
		ll m=INT_MIN;
		rep(i,0,n)
		{
			cin>>a[i];
			m=max(m,a[i]);
			if(i!=0)
			{
				if(a[i]!=a[0])
					f=1;
			}
		}
		ll ans=-1;
		if(f==0)
		{
			ans=-1;
		}
		else
		{
			rep(i,0,n)
			{
				if(a[i]==m)
				{
					if(i!=0 && a[i-1]<a[i])
					{
						ans=i+1;
					}
					if(i==0 && a[i+1]<a[i])
					{
						ans=i+1;
					}
					
					if(i!=n-1 && a[i+1]<a[i])
					{
						ans=i+1;
					}
					if(i==n-1 && a[i-1]<a[i])
					{
						ans=i+1;
					}

				}
			}
		}
		cout<<ans<<endl;




	}	
	return 0;
}