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
	
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],b[n],c[n];
		rep(i,0,n)
		{
			cin>>a[i]>>b[i];
		}
		c[0]=max(0LL,a[0]-b[n-1]);
		ll s=c[0];

		rep(i,1,n)
		{
			c[i]=max(0LL,a[i]-b[i-1]);
			s+=c[i];
		}
		ll ans=INT_MAX;
		rep(i,0,n)
		{
			ans=min(ans,a[i]+s-c[i]);
		}
		cout<<ans<<endl;
	}	






	
	return 0;
}