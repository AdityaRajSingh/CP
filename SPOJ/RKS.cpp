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
#define N 1000000001


ll s[N];
bool fun(ll i1, ll i2) 
{ 
	if(s[i1]<s[i2])
		return false;
	return true;
} 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll c,n;
	cin>>n>>c;
	ll a[c+1]={0};
	memset(s,0,sizeof(s));

	int q=1;
	rep(i,0,n)
	{

		ll x;
		cin>>x;
		a[x]++;

		if(s[x]==0)
		{
			s[x]=q;
			q++;
		}
	}	
	
	// rep(i,1,c+1)
	// {
	// 	cout<<i<<" "<<s[i]<<endl;
	// }


	vector< vector<ll> > f(n);

	// multimap<ll,ll> mp;
	rep(i,1,c+1)
	{
		f[a[i]].pb(i);
		// mp.insert(pair <ll,ll> (a[i],i));
	}

	rep(i,0,n)
	{
		sort(f[i].begin(), f[i].end(),fun);
	}

	rep(i,0,n)
	{
		rep(j,0,f[i].size())
		{
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}

	// map<ll,vector<ll>> f;

	// for(auto it:mp)
	// {
	// 	f[it.first].pb(it.second);
	// }



	// for(auto it:f)
	// {
	// 	rep(i,0,it.size())
	// 	{

	// 	}
	// }



	
	return 0;
}