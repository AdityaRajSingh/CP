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

ll n,m;
vll a(1005,0);
vll s(1005,1);
void initialize()
{
		rep(i,0,n)
	{
		a[i]=i;
		s[i]=1;
	}
}
ll root(ll i)
{
	while(a[i]!=i)
	{
		a[i]=a[a[i]];
		i=a[i];
	}
	return i;

}
void dsu(ll x, ll y)
{
	ll rx=root(x);
	ll ry=root(y);
	if(s[rx]>=s[ry])
	{
		a[ry]=a[rx];
		s[rx]+=s[ry];
		s[ry]=0;
	}
	else
	{
		a[rx]=a[ry];
		s[ry]+=s[rx];
		s[rx]=0;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll x,y;

	cin>>n>>m;
	a.resize(n);
	s.resize(n,1);
	initialize();
	while(m--)
	{
		cin>>x>>y;
		dsu(x,y);
		vector<ll> v;
		rep(i,0,n)
		{	
			if(s[i]!=0)
				v.pb(s[i]);
		}
		sort(v.begin(), v.end());
		rep(i,0,v.size())
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;

	}	

	




	
	return 0;
}