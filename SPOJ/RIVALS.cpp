#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define N 10000
ll M=1e9+7;




ll dp[N][N];
ll x,y;



ll noOfWays(ll i, ll j)
{
		if(i==x && j==y)
		return 1;
		

		if(i< 0 || i>x || j<0 || j>y)
		return 0;

		if(dp[i][j]!=-1)
			return dp[i][j];

	return dp[i][j]= noOfWays(i+1,j)+noOfWays(i,j+1);
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t; cin>>t;
	while(t--)
	{
		cin>>x>>y;
		memset(dp,-1,sizeof(dp));
		cout<<noOfWays(0,0)<<endl;
	}	
	return 0;
}