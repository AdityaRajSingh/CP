#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair
ll M=1000000007;

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
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<ll>());
		ll s=0;
		rep(i,0,n)
		{
			a[i]=max(0LL,a[i]-i);
			s+=a[i];
			s=s%M;
		}
		cout<<s<<endl;

	}
	return 0;
}