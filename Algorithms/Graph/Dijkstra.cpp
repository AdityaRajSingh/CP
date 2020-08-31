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


const int MAX = 1e4 + 5;
typedef pair<long long, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];

long long Dijkstra(int x)
{
    //priority_q<cost, 
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;


    long long minimumCost = 0;
   
    Q.push(make_pair(0, x));



    while(!Q.empty())
    {
        // Select the edge with minimum weight
        PII p = Q.top();
        Q.pop();
        x = p.second;

        // Checking for cycle
        if(marked[x] == true)
            continue;


        minimumCost += p.first;
        marked[x] = true;
        for(int i = 0;i < adj[x].size();++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minimumCost;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/aadi/Documents/input.txt", "r", stdin);
        freopen("/home/aadi/Documents/output.txt", "w", stdout);
    #endif

    int nodes, edges, x, y;
    long long weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        cout<< weight<<endl;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    minimumCost = Dijkstra(1);
    cout << minimumCost << endl;
}



