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
	
	ll t,n,k;
	
map <ll,int> mp;
		cin>>n>>k;
		ll a[n],ans=0;
		rep(i,0,n)
		{
			cin>>t;
			a[i]=t;
			mp[t]++;
		}
		rep(i,0,n)
		{
			if(mp[a[i]+k])
			{
				ans++;
			}
		}
		cout<<ans;
	






	
	return 0;
}