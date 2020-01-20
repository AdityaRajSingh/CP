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
	
	ll n,k;
	ll a[1000009];
	cin>>n;
	rep(i,0,n)
	{
		cin>>a[i];
	}	
	cin>>k;

	ll m;
	rep(i,0,k)
	{
		m=max(m,a[i]);
	}
	cout<<m<<" ";
	rep(i,k,n)
	{
		if(a[i]>m)
	}







	
	return 0;
}