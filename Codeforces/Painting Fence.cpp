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

ll a[5005];
ll ans=0;
void divide(ll l,ll r)
{
	
	ll m=LONG_MAX;
	rep(i,l,r)
	{
		m=min(m,a[i]);
	}
	if(m<(r-l))
	{
		ans+=m;
		// if(1)
		// {
		// 	cout<<"l="<<l<<" r="<<r<<" ";
		// cout<<" diff="<<m<<" ans="<<ans<<endl;
		// }
		
		vll v;
		if(a[l]!=m)
		{
			v.pb(l-1);
		}
		ll pos=l;
		rep(i,l,r)
		{
			a[i]-=m;
			if(a[i]==0)
				pos=i;
		}
			divide(l,pos);
			divide(pos+1,r);

		return;
	}
	else
	{
		ans+=(r-l);
		// if(1)
		// {
		// 	cout<<"l="<<l<<" r="<<r<<" ";
		// cout<<" diff="<<r-l<<" ans="<<ans<<endl;
		// }
		rep(i,l,r)
		{
			a[i]=0;
		}
		return;
	}	
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
		ll n;
		cin>>n;
		
		//ll m=100000;
		rep(i,0,n)
		{
			cin>>a[i];
			//m=min(m,a[i]);
		}
	// 	rep(i,0,n)
	// {
	// 	a[i]-=m;
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

		divide(0,n);
		cout<<ans;


	return 0;
}