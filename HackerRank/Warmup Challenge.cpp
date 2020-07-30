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

ll M=1000000007;

ll dp[10000005];

ll rec(ll n)
{
	if(n==0)
		return 1%M;
	if(n<0)
		return 0%M;

	if(dp[n]!=-1)
		return dp[n];

	return dp[n]=(rec(n-2)%M+rec(n-3)%M)%M;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; 
	cin>>t;
	memset(dp,-1,sizeof(dp));
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	rep1(i,4,10000005)
	{
		dp[i]=(dp[i-2]%M+dp[i-3]%M)%M;
	}
	while(t--)
	{
		cin>>n;
		cout<<dp[n]<<endl;
	}	
	return 0;
}