#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


map<pair<ll,ll>,ll > dp;
ll maxDigit(ll x)
{
	ll m=LONG_MIN;
	while(x>0)
	{
		ll d=x%10;
		m=max(d,m);
		x=x/10;
	}
	return  m;
}

ll minDigit(ll x)
{
	ll m=LONG_MAX;
	while(x>0)
	{
		ll d=x%10;
		m=min(d,m);
		x=x/10;
	}
	return  m;
}

ll rec(ll a1, ll k)
{
	ll ans=a1;
	k--;
	while(k--)
	{
		ll n=ans;
		ll min=minDigit(ans);
		ll max=maxDigit(ans);
		if(min==0)
		{
			break;
		}
		ans+=min*max;
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
	
	ll t; cin>>t;

	while(t--)
	{
		ll a1,k;
		cin>>a1>>k;
		cout<<rec(a1,k)<<endl;
		
	}
	
	
	return 0;
}