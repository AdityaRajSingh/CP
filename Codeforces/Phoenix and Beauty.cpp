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
	
	ll t,n,k; cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n];
		rep(i,0,n)
		cin>>a[i];

		if(n==k)
		{
			vll ans;
			rep(i,0,n)
			{
				ans.pb(a[i]);
			}
			ans.pb(a[0]);
			cout<<n+1<<endl;
			rep(i,0,ans.size())
			{
				cout<<ans[i];
			}
		}
		else
		{
			ll s[n]={0};
			s[0]=a[0];
			rep(i,1,n)
			{
				s[i]=s[i-1]+a[i];
			}
			ll f=0,p=0;
			rep(i,k,n)
			{
				if(s[i-k]!=s[k-1])
				{
					f=1;
					p=i;
					break;
				}
			}
			if(f==0)
			{
				cout<<n<<endl;
				rep(i,0,n)
				{
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
			else
			{
				vll ans;
				vll s;
				rep(i,0,k)
				{
					ans.pb(a[i]);
					s.pb(s[i]);
				}
				rep(i,k,n)
				{
					if(s[i-k]!=s[k-1])
					{
						ans.pb(s[k-1]);
						
					}
				}
			}
		}
	}	
	return 0;
}