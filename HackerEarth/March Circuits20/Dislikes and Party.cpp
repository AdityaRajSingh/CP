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
	
	ll n;
	cin>>n;
	vector<vector<int> > v(10);
	rep(i,0,10)
	{
		rep(j,0,10)
		{
			ll x;
			cin>>x;
			v[i].push_back(x);
		}
		
	}
	map<pair<ll,ll>,ll> mp;
	rep(i,0,10)
	{
		rep(j,1,10)
		{
			
			ll a=(v[i][0]>v[i][j])?v[i][0]:v[i][j];
			ll b=(v[i][0]<v[i][j])?v[i][0]:v[i][j];
			pair<ll,ll> p1=make_pair(a,b);
			mp[p1]++;
			
		}		
	}

	ll k=0;
	for(auto it: mp)
	{
		k++;
	}

	ll ans;
	ans=(n*(n-1))/2;
	ans=ans-k;
	cout<<ans;

	
	return 0;
}