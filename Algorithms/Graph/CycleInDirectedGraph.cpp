#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)

int vis[10005]={0};
int rec[10005]={0};
bool util(vector<int> g[], int a)
{
    if(!vis[a])
    {
        vis[a]=1;
        rec[a]=1;
        for(int i=0;i<g[a].size();i++)
        {
            if(!vis[g[a][i]])
            {
                if(util(g,g[a][i]))
                    return true;
            }
            else
            {
                if(rec[g[a][i]])
                return true;
            }
        }  
    }
    rec[a]=0;
    
    return false;
}

bool isCyclic(int V, vector<int> g[])
{
    memset(vis,0,sizeof(vis));
    memset(rec,0,sizeof(rec));
   for(int i=0;i<V;i++)
   {
      
           if(util(g,i))
                return true;
   }
   return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
        }

        cout << isCyclic(V,adj)<<endl;

    }
	return 0;
}