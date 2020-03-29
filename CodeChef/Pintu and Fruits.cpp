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
	
	ll t,n,m;
	cin>>t;
	



	while(t--)
	{
			vector<ll> v1;
			vector<ll> v2;
			map<ll,ll> mp;

		cin>>n>>m;
		rep(i,0,n)
		{
			ll x;
			cin>>x;
			v1.pb(x);
		}
		rep(i,0,n)
		{
			ll x;
			cin>>x;
			v2.pb(x);
		}
		rep(i,0,v1.size())
		{
			mp[v1[i]]+=v2[i];
		}
		ll min=INT_MAX;
		for(auto it: mp)
		{
			if(it.second<min)
				min=it.second;
		}
		cout<<min<<endl;

	}	






	
	return 0;
}