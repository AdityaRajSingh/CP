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
		ll a[n];
		rep(i,0,n)
			cin>>a[i];
		ll i=0; ll j=2; ll ans=2;
		ll mi,ma=-1;
		ll mipos,mapos;
		if(a[0]<a[1])
		{
			mipos=0;
			mi=a[0];

			ma=a[1];
			mapos=1;
		}
		if(a[0]>a[1])
		{

			mipos=1;
			mi=a[1];

			ma=a[0];
			mapos=0;
		}
		if(a[0]==a[1])
		{
			mipos=1;
			mi=a[1];
		}

		while(j<n)
		{
			if(a[j]==mi )
			{
				ans=max((j-i+1),ans);
				mipos=j;
			}
			else if(a[j]==ma)
			{
				ans=max((j-i+1),ans);
				mapos=j;
			}
			else if(ma==-1)
			{
				ans=max((j-i+1),ans);
				if(a[j]>mi)
				{
					ma=a[j];
					mapos=j;
				}
				else
				{
					ma=mi;
					mapos=mipos;
					mi=a[j];
					mipos=j;
				}
			}
			else
			{
				if(a[j]>ma)
				{
					i=mipos+1;
					mi=ma;
					mipos=mapos;
					ma=a[j];
					mapos=j;
				}
				else
				{
					i=mapos+1;
					ma=mi;
					mapos=mipos;
					mi=a[j];
					mipos=j;
				}
				ans=max((j-i+1),ans);
			}
			//cout<<j-i+1<<"  when j="<<j<<" & i="<<i<<endl;
			j++;
			
		}
		cout<<ans;
	
	return 0;
}