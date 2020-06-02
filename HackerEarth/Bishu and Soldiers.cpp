#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,q;
	cin>>n;
	ll a[n];
	rep(i,0,n)
	{
		cin>>a[i];
	}
	
		
	sort(a,a+n);
	ll s[n];
	s[0]=a[0];
	rep(i,1,n)
	{
		s[i]=a[i]+s[i-1];
	}
	cin>>q;
	ll x;
	rep(i,0,q)
	{
		cin>>x;
		ll pos=lower_bound(a,a+n,x)-a;
		if(a[pos]==x)
		{
			pos=upper_bound(a,a+n,x)-a;
			cout<<pos<<" "<<s[pos-1]<<endl;
		}
		else
		{
			cout<<pos<<" "<<s[pos-1]<<endl;
		}
	}

	return 0;
}