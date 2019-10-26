/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair
#define N 105



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		rep(i,0,n)
			cin>>a[i];

		sort(a,a+n);
		ll x=n/4;
		ll y=n/2;
		ll z=3*n/4;

		if(a[x-1]!=a[x] && a[y-1]!=a[y]  && a[z-1]!=a[z])
		{
			cout<<a[x]<<" "<<a[y]<<" "<<a[z]<<endl;
		}
		else
			cout<<"-1"<<endl;


	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}