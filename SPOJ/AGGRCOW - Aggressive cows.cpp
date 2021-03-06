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

bool f(ll a[], ll mid, ll n, ll c)
{
	ll d=1;
	ll prev=0;
	rep(i,1,n)
	{
		if(a[i]-a[prev]>=mid)
		{
			d++;
			prev=i;
			if(d>=c)
			{
				return true;
			}
		}
	}
	return false;
}


ll bsDistance(ll a[], ll n, ll c)
{
	ll m=-1;
	rep(i,0,n)
	{
		m=max(m,a[i]);
	}
	ll l=1;
	ll r=m;
	ll ans=-1;
	while(l<=r)
	{
		ll mid=l+(r-l)/2;
		if(f(a,mid,n,c))
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
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
	
	ll t,n,c; 
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		ll a[n];
		rep(i,0,n)
			cin>>a[i];

		sort(a,a+n);
		cout<<bsDistance(a,n,c)<<endl;
		
		
	}	
	return 0;
}