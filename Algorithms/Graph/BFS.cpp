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



vector <int> bfs(vector<int> g[], int N) {

    vector<int> vis(N,0);
    vector<int> ans;
    
	
	queue<int> q;
	q.push(0);
	ans.push_back(0);


	while(!q.empty())
	{
			int f=q.front();
			vis[f]=1;

			q.pop();
			
			for(int i=0;i<g[f].size();i++)
			{
				if(!vis[g[f][i]])
				{
					ans.push_back(g[f][i]);
					q.push(g[f][i]);
					vis[g[f][i]]=1;
				}
			}
	}
	return ans;
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
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
	return 0;
}