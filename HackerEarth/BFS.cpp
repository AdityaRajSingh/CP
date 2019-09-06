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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair

vector<int> g[100005];
int vis[100005];
int level[100005];

void bfs(int x,int n)
{
	queue<int> q;
	q.push(1);
	level[1]=1;
	vis[1]=1;
	while(!q.empty())
	{
		int f=q.front();
		q.pop();

		for(int i=0;i<g[f].size();i++)
		{
			int a=g[f][i];
			if(vis[a]==0)
			{
				q.push(a);
				vis[a]=1;
				level[a]=level[f]+1;
			}
		}

	}
	int k=0;
	for(int i=1;i<=n;i++)
	{
		if(level[i]==x)
			k++;
	}
cout<<k;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int n,x,a,b;
	cin>>n;
	
	rep(i,0,n-1)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	cin>>x;
	bfs(x,n);

////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}