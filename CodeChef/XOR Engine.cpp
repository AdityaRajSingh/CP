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


ll setbits(ll n)
{
	ll c=0;
	while(n>0)
	{
		c+=n&1;
		n>>=1;
	}
	return c;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,q;
	cin>>t;
	while(t--)
	{
		vector<ll> v1;
		vector<ll> v2;
		cin>>n>>q;
		
		ll v1o=0,v1e=0;
		

		rep(i,0,n)
		{
			ll x;
			cin>>x;
			v1.push_back(x);
			if(setbits(x)%2==0)
			{
				v1e++;
			}
			else
			{
				v1o++;
			}
		}


		rep(i,0,q)
		{
			ll x;
			cin>>x;
			v2.pb(x);
		}

		rep(i,0,q)
		{
			ll c1=setbits(v2[i]);
			if(c1%2==0)
			{
				cout<<v1e<<" "<<v1o<<endl;
			}
			else
			{
				cout<<v1o<<" "<<v1e<<endl;
			}
		}

	}	
	
	return 0;
}