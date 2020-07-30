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

void bfs(int x,int n)
{
	memset(vis,0,sizeof(vis));
	
	queue<int> q;
	q.push(1);

	int k=1;
	ll ans;

	while(!q.empty())
	{
			int l=q.size();
			if(k==x)
			{
				cout<<l;
			}
			for(int i=0;i<l;i++)
			{
				int f=q.front();
				vis[f]=1;
				//cout<<f<<" ";
				q.pop();

				for(int j=0;j<g[f].size();j++)
				{
					if(!vis[g[f][j]])
					{
						vis[g[f][j]]=1;
						q.push(g[f][j]);
					}
				}
			}
			k++;
			
			//cout<<endl;
	}
	// cout<<ans;
	
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