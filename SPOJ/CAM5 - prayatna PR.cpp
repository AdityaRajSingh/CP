/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair


vector<ll> g[100000]; 
ll vis[100000]={0};

void dfs(ll a)
{
	vis[a]=1;
	for(ll i=0;i<g[a].size();i++)
	{
		if(!vis[g[a][i]])
			dfs(g[a][i]);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n,m,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		rep(i,0,100000)
			g[i].clear();
		rep(i,0,m)
		{
			cin>>a>>b;
			g[a].pb(b);
			g[b].pb(a);
		}
		
		int k=0;
		fill_n(vis, 100000, 0);

		for(ll i=0;i<n;i++)
		{
			if(!vis[i])
			{
				dfs(i);
				k++;
			}
		}
		rep(i,0,n)
		{
			if(!vis[i])
				k++;
		}
			cout<<k<<"\n";
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}