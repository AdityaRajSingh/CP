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
	
	ll n,m;
	cin>>n>>m;


	map<ll,ll> mp;
	ll a[n];
	ll b[n];
	ll c[n];
	rep(i,0,n)
	{
		cin>>a[i];
	}	
	rep(i,0,n)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);

	rep(i,0,n)
	{
		c[i]=b[i]-a[i]%m;
	}
	sort(c,c+n);
	rep(i,0,n)
	{
		mp[c[i]]++;
	}
	ll d[n];

	
	for(auto i: mp)
	{
		rep(j,0,n)
		{
			d[j]=(a[j]+i.first)%m;
		}
		sort(d,d+n);
		ll k=0;
		rep(j,0,n)
		{
			if(d[j]!=b[j])
			{
				k=1;
			}
		}
		if(k==0)
		{
			cout<<i.first;
			break;
		}
	}





	
	return 0;
}