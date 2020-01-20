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


ll f(ll x)
{
	ll ans=0;
	rep(i,0,n)
	{
		if(x<a[i])
		{
			ans+=a[i]-x;
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
	ll end=-1;
	rep(i,0,n)
	{
		cin>>a[i];
		if(a[i]>end)
			end=a[i];

	}
	ll ans=0;
	ll beg=0,mid;
	
	while(beg<=end)
	{
		mid=beg+(end-beg)/2;
		if(f(mid)>=m)
		{
			ans=mid;
			beg=mid+1;
		}
		if(f(mid)<m)
		{
			end=mid-1;
		}
	}
	cout<<ans;
	return 0;
}