														//ADITYA RAJ SINGH//
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
stack<int> stac;
void util(vector<int> g[], int a)
{
        vis[a]=1;
        for(int i=0;i<g[a].size();i++)
        {
            if(!vis[g[a][i]])
            {
                util(g,g[a][i]);
            }
        }  
        stac.push(a);
}

vector<int> topoSort(int V, vector<int> g[]) 
{
    
  memset(vis,0,sizeof(vis));
   
   for(int i=0;i<V;i++)
   {
      if(!vis[i])
           util(g,i);
   }
   vector<int> ans;
  while(!stac.empty())
  {
      ans.push_back(stac.top());
      stac.pop();
  }
  return ans;
}

bool check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return false;
        }
    }
    return true;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        vector <int> res = topoSort(N, adj);

        for (int i = 0; i < res.size(); i++) 
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}