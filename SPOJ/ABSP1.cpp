#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
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
		ll ans=0;
		cin>>n;
		ll a[10005];
		rep(i,1,n)
		{
			cin>>a[i];
		}
		rep(i,1,n)
		{
			ans+=a[i]*(n-i);
			ans-=a[i]*(i-1);
		}
		ans=abs(ans);
		cout<<ans<<endl;
	}	






	
	return 0;
}