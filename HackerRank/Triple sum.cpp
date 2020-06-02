#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

ll la,lb,lc;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	
	cin>>la>>lb>>lc;
	ll a[la],b[lb],c[lc];
	rep(i,0,la)
		cin>>a[i];
	rep(i,0,lb)
		cin>>b[i];
	rep(i,0,lc)
		cin>>c[i];

	sort(a,a+la);
	sort(b,b+lb);
	sort(c,c+lc);

	rep(i,0,lb)
	{
		
		ll x=upper_bound(a,a+la,b[i]);
		ll y=upper_bound(c,c+lc,b[i]);
		ans+=x*y;
	}
	cout<<ans;
	return 0;
}