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

bool sortbysec(const pair<ll,ll> &a , const pair<ll,ll> &b)
{
	return (a.second < b.second);
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,N,m,n;
	cin>>t;
	while(t--)
	{
		ll k=1;
		cin>>N;
		vector< pair < ll,ll > > v;
		rep(i,0,N)
		{
			cin>>m>>n;
			v.pb(make_pair(m,n));
		}
		sort(v.begin(),v.end(),sortbysec);

			ll e=v[0].second;
			rep(i,1,N)
			{
				if(v[i].first>=e)
				{
					k++;
					e=v[i].second;
				}
			}
			cout<<k<<endl;
	}	








	
	return 0;
}