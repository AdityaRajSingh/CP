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
	
	ll t,n,q; cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>q;
		ll a[q];
		ll x,y;
		ll prev=0,ans=0;
		rep(i,0,q)
		{
			cin>>x>>y;
			ans+=abs(x-prev);
			ans+=abs(y-x);
			prev=y;
		}
		cout<<ans<<endl;



	}	
	return 0;
}