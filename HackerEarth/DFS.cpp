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

int vis[100000]={0};
vector<int> g[100000];

void dfs(int a)
{
	vis[a]=1;
	for(int i=0;i<g[a].size();i++)
	{
		if(!vis[g[a][i]])
		{
			dfs(g[a][i]);
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
////////////////////////////////////////////////////////////////////////////////////////////

int n,m,a,b,x;
cin>>n>>m;


for(int i=0;i<m;i++)
{
	cin>>a>>b;
	g[a].pb(b);
	g[b].pb(a);
}
cin>>x;
dfs( x);
int k=0;
for(int i=1;i<=n;i++)
{
	if(vis[i]==0)
	{
		k++;
	}
}
cout<<k;



////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}