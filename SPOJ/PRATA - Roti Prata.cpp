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

bool f(ll a[], ll mid, ll n, ll p)
{
	ll tp=0;
	rep(i,0,n)
	{
		ll x=a[i],t=0;
		ll k=1;
		while(t+(x*k)<=mid)
		{
			t+=(x*k);
			k++;
		}
		tp+=(k-1);
		if(tp>=p)
		{
			return true;
		}

	}
	return false;
}


ll bsTime(ll a[], ll n, ll p)
{
	ll m=INT_MAX;
	rep(i,0,n)
	{
		m=min(m,a[i]);
	}
	ll l=0;
	ll r=(p*(p+1))/2;
	r=r*m;
	ll ans=l;
	while(l<=r)
	{
		ll mid=l+(r-l)/2;
		if(f(a,mid,n,p))
		{
			ans=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
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
	
	ll t,n,p; 
	cin>>t;
	while(t--)
	{
		cin>>p;
		cin>>n;
		ll a[n];
		rep(i,0,n)
			cin>>a[i];

		cout<<bsTime(a,n,p)<<endl;


	}	
	return 0;
}