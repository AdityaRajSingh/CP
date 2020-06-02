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
	
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll a[n];
	rep(i,0,n)
	{	
		a[i]=s[i]-'0';
	}
	ll f[10];
	rep(i,1,10)
	{
		ll x;
		cin>>x;
		
		f[i]=x;
	}
	ll k=0;
	rep(i,0,n)
	{
		if(a[i]<f[a[i]])
		{
			a[i]=f[a[i]];
			k=1;
		}
		else
		{
			if(a[i]>f[a[i]] && k==1)
			{
				break;
			}
		}
	}
	rep(i,0,n)
		cout<<a[i];
	return 0;
}