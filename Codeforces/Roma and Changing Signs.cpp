#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll N,k;
	cin>>N>>k;
	ll a[N];
	vll n;
	ll sn=0;
	ll sp=0;
	vll p;
	ll m=INT_MAX;
	rep(i,0,N)
	{
		cin>>a[i];
		m=min(m,abs(a[i]));
		if(a[i]<0)
		{
			n.pb(a[i]);
			sn+=abs(a[i]);
		}
		else
		{
			p.pb(a[i]);
			sp+=a[i];
		}
	}
	ll s=n.size();
	sort(n.begin(), n.end());
	if(s==k)
	{
		cout<<sn+sp<<endl;
	}
	else if(s>k)
	{
		ll snl=0;
		rep(i,0,k)
		{
			snl+=abs(n[i]);
		}
		rep(i,k,s)
		{
			snl+=n[i];
		}
		cout<<snl+sp<<endl;
	}
	else
	{
		ll d=k-s;
		if(d%2==0)
		{
			cout<<sn+sp<<endl;
		}
		else
		{
			cout<<sn+sp-(2*m)<<endl;
		}
	}
	
	return 0;
}