#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
	
	ll t,n1; cin>>t;
	while(t--)
	{
		cin>>n1;ll a[n1];
		ll mp=LONG_MIN;
		ll mn=LONG_MIN;
		rep(i,0,n1)
		{
			cin>>a[i];
		}

		if(a[0]>0)
		{
			mp=a[0];
		}
		else
		{
			mn=a[0];
		}

		ll ans=0;
		rep(i,1,n1)
		{
			if(a[i]>0 && a[i-1]>0)
			{
				mp=max(a[i],mp);
			}
			if(a[i]<0 && a[i-1]<0)
			{
				mn=max(a[i],mn);
			}


			if(a[i]>0 && a[i-1]<0)
			{
				mp=max(a[i],mp);
				ans+=mn;
				mn=LONG_MIN;
			}
			if(a[i]<0 && a[i-1]>0)
			{
				mn=max(a[i],mn);
				ans+=mp;
				mp=LONG_MIN;
			}
		}

		if(a[n1-1]>0 && a[n1-2]>0)
		{
			ans+=mp;
		}
		if(a[n1-1]<0 && a[n1-2]<0)
		{
			ans+=mn;
		}
		if(a[n1-1]>0 && a[n1-2]<0)
		{
			ans+=mp;
		}
		if(a[n1-1]<0 && a[n1-2]>0)
		{
			ans+=mn;
		}
		cout<<ans<<endl;
	}	
	return 0;
}