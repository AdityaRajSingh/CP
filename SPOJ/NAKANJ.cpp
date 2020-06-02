#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//vector<pair<int,int>> adj[65];
map<pair<int,int>,vector<pair<int,int>> > adj;

bool isSafe(int x, int y)
{
	if(x>0 && x<9 && y>0 && y<9)
		return true;
	return false;
}
void initialize()
{
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			pair<int,int> p (i,j);
			if(isSafe(i+2,j+1))
			{
				pair<int,int> p1 (i+2,j+1);
				adj[p].pb(p1);
			}
			if(isSafe(i+2,j-1))
			{
				pair<int,int> p2 (i+2,j-1);
				adj[p].pb(p2);
			}
			if(isSafe(i-2,j+1))
			{
				pair<int,int> p3 (i-2,j+1);
				adj[p].pb(p3);
			}
			if(isSafe(i-2,j-1))
			{
				pair<int,int> p4 (i-2,j-1);
				adj[p].pb(p4);
			}
			if(isSafe(i+1,j+2))
			{
				pair<int,int> p5 (i+1,j+2);
				adj[p].pb(p5);
			}
			if(isSafe(i+1,j-2))
			{
				pair<int,int> p6 (i+1,j-2);
				adj[p].pb(p6);
			}
			if(isSafe(i-1,j+2))
			{
				pair<int,int> p7 (i-1,j+2);
				adj[p].pb(p7);
			}
			if(isSafe(i-1,j-2))
			{
				pair<int,int> p8 (i-1,j-2);
				adj[p].pb(p8);
			}
		}
	}
}



int BFS(pair<int,int> s,pair<int,int> d)
{
	queue<pair<int,int>> q;
	q.push(s);
	map<pair<int,int>,bool> vis;
	map<pair<int,int>,int> dist;
	vis[s]=true;
	dist[s]=0;
	while(!q.empty())
	{
		pair<int,int> f=q.front();
		//cout<<f.first<<" "<<f.second<<endl;
		q.pop();
		for(auto i=0;i<adj[f].size();i++)
		{
			if(!vis[adj[f][i]])
			{
				vis[adj[f][i]]=true;
				q.push(adj[f][i]);
				dist[adj[f][i]]=dist[f]+1;
			}
		}
	}
	return dist[d];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;

	
	initialize();

	// for(auto it:adj)
	// {
	// 	cout<<it.first.first<<" "<<it.first.second<<"-----";
	// 	for(auto i=0;i<it.second.size();i++)
	// 	{
	// 		cout<<it.second[i].first<<" "<<it.second[i].second<<", ";
	// 	}
	// 	cout<<endl;
	// }

	ll t;
	cin>>t;
	string s;
	getline(cin,s);
	while(t--)
	{

		string s;
		getline(cin,s);
		//cout<<s.length()<<endl;
		int i=(s[0]-'a')+1;
		int j=(s[1]-'0');

		int x=(s[3]-'a')+1;
		int y=(s[4]-'0');


		//cout<<i<<","<<j<<"   ";
		//cout<<x<<","<<y<<endl;
		//cout<<endl;
		pair<int,int> p1 (i,j);
		pair<int,int> p2 (x,y);
		cout<<BFS(p1,p2)<<endl;
	}	
	return 0;
}