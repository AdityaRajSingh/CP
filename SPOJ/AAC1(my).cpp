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

const ll N = 1e4+10;

vll g[N];

bool vis[N];
ll level[N];

void bfs(ll s)
{
	memset(vis , false , sizeof vis);
	vis[s] = true;

	queue<ll> q;

	q.push(s);
	level[s] = 0;
	while(!q.empty())
	{
		ll x = q.front();
		for(ll i = 0 ; i< g[x].size() ; ++i)
		{
			ll it = g[x][i];
			if(!vis[it])
			{
				vis[it] = true;
				level[it] = level[x]+1;
				q.push(it);
			}
		}                                             
		q.pop();
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
	
	ll t,n,m,x,y;
	cin>>t;
	while(t--)
	{
       cin>>n>>m;
       rep(i,0,n+1)
       	g[i].clear();

       rep(i,0,m)
       {
       	cin >> x >> y;
       	g[x].pb(y);
       	g[y].pb(x);
		}
		bfs(1);
		cout<<level[n]<<endl; 
    }







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}