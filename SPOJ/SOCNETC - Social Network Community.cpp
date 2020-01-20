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

vll a(100005,0);
vll s(100005,1);
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
	if((s[rx]+s[ry])<=m)
	{
		if(s[rx]>=s[ry])
		{

			a[ry]=a[rx];
			s[rx]+=s[ry];
		}
	else
		{
			a[rx]=a[ry];
			s[ry]+=s[rx];
		}
	}
	
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll q;
	cin>>n>>m;
	cin>>q;
	char c;
	ll x,y;
	a.resize(n);
	s.resize(n,1);
	initialize();
	while(q--)
	{

		cin>>c;
		if(c=='S')
			cin>>x;
		else
			cin>>x>>y;

		if(c=='E')
		{
			// cout<<c<<x<<y<<" ";
			if(root(x)==root(y))
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
		if(c=='S')
		{
			// cout<<c<<x<<" ";
			cout<<s[root(x)]<<endl;
		}
		if(c=='A')
		{
			//cout<<c<<x<<y<<" ";
			dsu(x,y);	
		}

	}	
	// rep(i,0,n)
	// {
	// 	cout<<s[i]<<" ";
	// }





	
	return 0;
}