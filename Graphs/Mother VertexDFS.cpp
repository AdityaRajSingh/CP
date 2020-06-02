#include<bits/stdc++.h>
using namespace std;

typedef int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


void DFS(int s,vector<int> adj[],bool vis[])
{
	vis[s]=true;
	rep(i,0,adj[s].size())
	{
		if(!vis[adj[s][i]])
		{
			DFS(adj[s][i],adj,vis);
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
	
	ll t,n,e; cin>>t;
	while(t--)
	{
		cin>>n>>e;
		vector<int> adj[n];
		bool vis[n];
		memset(vis,false,sizeof(vis));
		rep(i,0,e)
		{
			ll u,v;
			cin>>u>>v;
			adj[u].pb(v);
		}
		DFS(0,adj,vis);
		ll k=0;
		rep(i,0,n)
		{
			if(!vis[i])
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}	
	return 0;
}


