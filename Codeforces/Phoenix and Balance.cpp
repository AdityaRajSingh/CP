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
	

	ll p[31];
	rep(i,1,31)
	{
		p[i]=pow(2,i);
	}
	ll t,n; cin>>t;

	while(t--)
	{
		cin>>n;
		ll a=0,b=0;
		a+=p[n];
		rep(i,1,n/2)
		{
			a+=p[i];
		}
		rep(i,n/2,n)
		{
			b+=p[i];
		}
		cout<<abs(b-a)<<endl;


	}	
	return 0;
}