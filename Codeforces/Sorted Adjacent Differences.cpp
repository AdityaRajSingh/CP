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
		ll a[n];
		rep(i,0,n)
		cin>>a[i];
		sort(a,a+n);
		vector<ll> ans;

		if(n%2==0)
		{
			ll x=n/2;
			x--;
			ll y=n/2;
			while(x>=0 && y<=n-1)
			{

				ans.pb(a[x]);
				ans.pb(a[y]);
				x--;
				y++;
			}
		}
		else
		{
			ans.pb(a[n/2]);
			ll x=n/2;
			x--;
			ll y=n/2;
			y++;
			while(x>=0 && y<=n-1)
			{
				ans.pb(a[x]);
				ans.pb(a[y]);
				x--;
				y++;
			}
		}
		rep(i,0,ans.size())
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}	






	
	return 0;
}