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

vector<bool> vis(10005);
void dfs(int s, vector<int> g[])
{
    vis[s]=true;
    
    for(int i=0;i<g[s].size();i++)
    {
        if(!vis[g[s][i]])
        {
            dfs(g[s][i],g);
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
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        
        cin>>n;

        int u, v;
        vector<int> adj[n+1];

        

        rep(i,0,n-1)
        {
            cin>>u>>v;
            //cout<<u<<" "<<v<<endl;
            adj[u].push_back(v);
        }

        int ans=INT_MAX;
        rep1(i,1,n)
        {
            vis.clear();
            vis.resize(n+1,false);
            // memset(vis, false, sizeof(vis));
            dfs(i,adj);
            int k=0;
            //cout<<"For Vertex ="<<i<<endl;
            rep1(j,1,n)
           {
                //cout<<vis[j]<<" ";
                if(!vis[j])
                    k++;
           }
           //cout<<"\n"<<k<<endl;
           ans=min(ans,k);
        }
        cout<<ans<<endl;
       
       
       

    }
	return 0;
}