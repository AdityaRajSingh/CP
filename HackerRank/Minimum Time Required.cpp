#include<bits/stdc++.h>
using namespace std;

typedef long  ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,g;
	cin>>n>>g;
	vll m;
	ll mm=LONG_MIN;
	rep(i,0,n)
	{
		ll x;
		cin>>x;
		mm=max(mm,x);
		m.pb(x);
	}

	sort(m.begin(),m.end());

	ll l=1;
	ll r=mm*g;

	while(l<r)
	{
		ll mid=l+(r-l)/2;

		ll la=0;
		rep(i,0,n)
		{
			la+=mid/m[i];
			if(mid/m[i]<1)
				break;
		}
		if(la>=g)
		{
			r=mid;
		}
		else
		{
			l=mid+1;
		}

	}
	ll ans=0;
	for(ll j=l-1;j>=0;j--)
	{
		ll la=0,mid=j;
		rep(i,0,n)
		{
			la+=mid/m[i];
			if(mid/m[i]<1)
				break;
		}
		if(la<g)
		{
			ans=j;
			break;
		}
	}
	cout<<ans+1<<endl;
	return 0;
}