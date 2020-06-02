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
	
	ll t,n,k; cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n+1],b[n+1];
		rep(i,1,n+1)
		{
			cin>>a[i];
			b[i]=a[i];
		}	

		sort(a+1,a+n+1);

		map<ll,ll> mp;

		rep(i,1,n+1)
		{
			mp[a[i]]=i;
		}
		ll q=0;
		rep(i,1,n+1)
		{
			if(b[i]!=a[i])
			{
				ll d=abs(mp[b[i]]-i);
				if(d%k!=0)
				{
					q=1;
					break;
				}
			}
		}
		if(q==1)
		{
			cout<<"no"<<endl;
		} 
		else
		{
			cout<<"yes"<<endl;
		}

	}	
	return 0;
}