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
	
	ll t,n,s; cin>>t;
	while(t--)
	{
		cin>>n>>s;
		ll a[n],p[n];
		ll ma=INT_MAX;
		ll md=INT_MAX;
		rep(i,0,n)
		{
			cin>>a[i];
		}
		rep(i,0,n)
		{
			cin>>p[i];
			if(p[i]==1)
			{
				ma=min(ma,a[i]);
			}
			else
			{
				md=min(md,a[i]);
			}
		}	
		if(s+md+ma<=100)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}




	}	
	return 0;
}