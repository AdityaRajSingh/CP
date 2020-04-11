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



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll a,n;
	cin>>n;
	map<ll,ll> mp;

	vector< vector<ll> > v(n);
	rep(i,0,n)
	{
		ll s;
		cin>>a;
		v[i].push_back(a);
		mp[a]++;

		cin>>s;
		rep(j,0,s)
		{
			ll x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	ll ans=0;
	rep(i,0,n)
	{
		rep(j,1,v[i].size())
		{
			if(mp.find(v[i][j])==mp.end())
			{
				mp[v[i][j]]++;
				ans++;
			}
		}
	}

	cout<<ans;




	
	return 0;
}