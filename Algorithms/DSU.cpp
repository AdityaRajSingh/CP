#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
#define mk make_pair

ll n,m;
vll a(1005,0);

void initialize()
{
	rep1(i,1,n)
	{
		a[i]=-1;
	}
}
ll root(ll i)
{
	// cout<<"root of "<<i;
	while(a[i]>0)
	{
		if(a[a[i]]>0)
			a[i]=a[a[i]];
		i=a[i];
	}
	// cout<<" is "<<i<<endl;
	return i;

}
void dsu(ll x, ll y)
{
	ll rx=root(x);
	ll ry=root(y);
	//cout<<rx<<" "<<ry<<endl;
	if(abs(a[rx])>=abs(a[ry]))
	{
		int temp=abs(a[ry]);
		a[rx]-=temp;
		a[ry]=rx;
	}
	else
	{
		int temp=abs(a[rx]);
		a[ry]-=temp;
		a[rx]=ry;
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
	a.resize(n+1);
	initialize();
	while(m--)
	{
		cin>>x>>y;
		dsu(x,y);
		// vector<ll> v;
		// rep(i,0,n)
		// {	
		// 	if(a[i]<0)
		// 		v.pb(abs(a[i]));
		// }
		// sort(v.begin(), v.end());
		// rep(i,0,v.size())
		// {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;

	}
	cout<<root(4)<<endl;	
	cout<<root(6)<<endl;	
	cout<<root(8)<<endl;	
	rep1(i,1,n)
	cout<<a[i]<<" ";

	




	
	return 0;
}