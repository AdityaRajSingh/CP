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

ll getPairsCount(ll a[],ll n, ll s, ll mp[])
{
	ll c=0;
	for(ll i=0;i<n;i++)
	{
		ll x=a[i];
		ll y=s-a[i];
		if(x==y)
		{
			if(mp[x]>=2)
			{
				mp[x]-=2;
				c++;
			}
		}
		else
		{
			if(mp[x]>=1 && mp[y]>=1)
			{
				mp[x]-=1;
				mp[y]-=1;
				c++;
			}
		}		
	}
	return c;
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
		ll a[n];
		ll mp[51]={0};
		ll s=0;
		rep(i,0,n)
		{
			cin>>a[i];
			mp[a[i]]++;
			s+=a[i];
		}


		
		ll ans=0;



		if(n>2)
		{
			ll l=1;
			ll r=n/2;
			for(ll i=r;i>=l;i--)
			{
				ll up=s/i;
				//cout<<i<<"\t"<<up<<endl;
				for(ll j=up;j>=0;j--)
				{
					ll count=getPairsCount(a, n,  j, mp);
					ans=max(ans,count);
				}
				
			}
		}
		else
		{
			
			if(n==1)
				ans=0;
			if(n==2)
			{
				ans=1;
			}
		}
		

		cout<<ans<<endl;





	}	
	return 0;
}