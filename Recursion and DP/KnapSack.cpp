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

int N,W;
vector<int> v;
vector<int> w;





int knapsack(int i, int W,vector<vector<int> >dp)
{


	if(i>=N)
	{
		return 0;
	}

	if(dp[i][W]!=-1)
	{
		return dp[i][W];
	}

	if(W-w[i]<0)
	{
		
			return knapsack(i+1,W,dp);
	}

else	
{
		return dp[i][W]=max(knapsack(i+1,W,dp),(v[i]+knapsack(i+1,W-w[i],dp)));
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
	
	

		cin>>N;
		int q=N;
		cin>>W;
		while(q--)
		{
			int x;
			cin>>x;

			v.push_back(x);
		}
		q=N;
		while(q--)
		{
			int y;
			cin>>y;
			w.push_back(y);
		}


	vector< vector<int> > dp(N+1, vector<int> (W+1,-1));
	cout<<dp[0].size()<<endl;
	cout<<knapsack(0,W,dp)<<endl;






////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}