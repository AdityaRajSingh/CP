#include<bits/stdc++.h>
using namespace std;

typedef int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define v 9 
int dist[v];
bool vis[v];
int shortestDistance()
{
	int mi=0,md=INT_MAX;
	rep(i,0,v)
	{
		if(!vis[i] && dist[i]<md)
		{
			md=dist[i];
			mi=i;
		}
	}
	return mi;
}
void dijkstra(int graph[v][v],int src)
{
	memset(dist,INT_MAX,v); 
	dist[src]=0;

	
	memset(vis,false,v); 
	vis[src]=true;

	rep(i,0,v)
	{
		int u=shortestDistance();
		vis[u]=true;
		rep(j,0,v)
		{
			if(!vis[j] && graph[u][j])
			{
				dist[j]=min(dist[j],dist[u]+graph[u][j]);
			}
		}
	}
	for (int i = 0; i < v; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	int graph[v][v] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0); 
	
	return 0;
}