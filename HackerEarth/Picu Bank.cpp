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



ll binarySearch(ll m, ll a, ll p)
{
			ll l=1;
			ll r=m+1;

			while(l<r)
			{
				ll mid=l+(r-l)/2;
				if(p<=mid*a)
					r=mid;
					
				else
				{
					l=mid+1;
				}
			}	
			return l;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t; cin>>t;
	while(t--)
	{
		ll d,a,m,b,x;
		cin>>d>>a>>m>>b>>x;

		ll p=x-d;
		if(a>=p)
			cout<<1<<endl;
		else
		{
			ll intrest=m*a+b;
		ll mdash=p/intrest;
		ll ans=0;
		if(p%intrest==0)
		{
			ans=mdash*(m+1);
		}
		else
		{
			ans=mdash*(m+1);
			p-=(intrest*mdash);
			// cout<<"p="<<p<<endl;
			// cout<<"intial="<<ans<<endl;



			ll pos=binarySearch(m,a,p);
			// ll am[m];
			// rep(i,0,m)
			// {
			// 	am[i]=a*(i+1);
			// 	//cout<<am[i]<<" ";
			// }
			//cout<<endl;
			//am[m]=am[m-1]+b;
			//ll pos=lower_bound(am,am+m,p)-am;
			//cout<<"pos="<<pos<<endl;
			ans+=pos;

		}
		cout<<ans<<endl;
		}
		
	}	
	return 0;
}