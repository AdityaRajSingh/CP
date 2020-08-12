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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,m,x,y;
	cin>>n>>m>>x>>y;

	ll grid[n][m];

	memset(grid,0,sizeof(grid));
	x--;
	y--;
	
	grid[x][y]=1;
	cout<<x+1<<" "<<y+1<<endl;
	grid[x][0]=1;
	cout<<x+1<<" "<<1<<endl;
	grid[0][0]=1;
	cout<<1<<" "<<1<<endl;


	rep(j,0,m)
	{
		rep(i,0,n)
		{
			if(grid[i][j]==0)
			{
				grid[i][j]=1;
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
		j++;
		for(ll i=n-1;i>=0;i--)
		{
			if(grid[i][j]==0)
			{
				grid[i][j]=1;
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
		
	}
	return 0;
}