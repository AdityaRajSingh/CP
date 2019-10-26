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
#define N 100000

int n;
int a[N][3];

int dp[N][3];
int vis[N][3];

void initialize()
{
	rep(i,0,N)
	{
		rep(j,0,3)
		{
			vis[i][j]=0;
			dp[i][j]=-1;
		}
	}
}

int minPath(int i, int j)
{
	
	if(i>n-1 || j<0 || j>2)
			return 10000009;

	if(vis[i][j]==0)
	{
		if(i== n-1 && j==1)
		{
			vis[i][j]=1;
			return dp[i][j]=a[i][j];
		}
		vis[i][j]=1;
		return dp[i][j]=a[i][j]+ min( min(min(minPath(i+1, j), minPath(i+1, j+1)), minPath(i+1, j-1)),minPath(i, j+1));
	}
	return dp[i][j];
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int k=0;
	while(1)
	{
		cin>>n;
		if(n==0)
			break;

		initialize();
		
		k++;
		rep(i,0,n)
		{
			cin>>a[i][0]>>a[i][1]>>a[i][2];
			//cout<<a<<" "<<b<<" "<<c<<endl;
		}	
		cout<<k<<". "<<minPath(0,1)<<endl;
	}






////////////////////////////////////////////////////////////////////////////////////////////


	
	return 0;
}