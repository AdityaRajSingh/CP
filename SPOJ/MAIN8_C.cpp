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
		cin>>n>>k;
		ll a[n];
		rep(i,0,n)
		{
			cin>>a[i];
		}
		ll ans=0;
		ll beg=0,mid;
		
		while(beg<=end)
		{
			mid=beg+(end-beg)/2;
			if(f(mid)>=m)
			{
				ans=mid;
				beg=mid+1;
			}
			if(f(mid)<m)
			{
				end=mid-1;
			}
		}
		cout<<ans;
	}	






	
	return 0;
}