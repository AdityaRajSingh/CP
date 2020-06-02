#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

vector<ll> v;
void initialize()
{
	ll r=0;
	ll s=-1;
	ll i=1;
	while(r<1000000001)
	{
		r+=2*i;
		s++;
		r+=s;
		v.pb(r);
		i++;
	}
	// rep(i,0,5)
	// {
	// 	cout<<v[i]<<endl;
	// }
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;


	initialize();
	
	ll t,n; cin>>t;

	while(t--)
	{
		ll ans=0;
		cin>>n;
		
		while(n>0)
		{
			if(n<v[0])
				break;
			ll ptr=lower_bound(v.begin(), v.end(), n)-v.begin();
			ll g;
			if(v[ptr]==n)
			{
				g=v[ptr]; 				
			}
			else
			{
				g=v[ptr-1]; 
			}
			ans++;
			n=n-g;
			//cout<<ptr<<" "<<g<<endl;
		}
		cout<<ans<<endl;
	}	
	return 0;
}