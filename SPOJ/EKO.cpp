#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair

ll n,m;
ll a[1000005];


bool f(ll a[], ll mid, ll n, ll c)
{
	ll s=0;
	
	rep(i,0,n)
	{
		if(a[i]>=mid)
			s+=(a[i]-mid);
	}
	if(s>=c)
		return true;

	return false;
}


ll bsHeight(ll a[], ll n, ll c)
{
	ll m=-1;
	rep(i,0,n)
	{
		m=max(m,a[i]);
	}
	ll l=0;
	ll r=m;
	ll ans=l;
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
	
	cin>>n>>m;
	
	rep(i,0,n)
	{
		cin>>a[i];
	}
	cout<<bsHeight(a,n,m);


	return 0;
}