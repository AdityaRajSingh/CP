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
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll ans=0;
		ll n,m;
		cin>>n>>m;
		if(n==1)
			cout<<0<<endl;
		else if(n==2)
		{
			cout<<m<<endl;
		}
		else
		{
			cout<<2*m<<endl;
		}
		

	}
	return 0;
}