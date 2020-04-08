#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair

#define M 10000007


ll dp[101][101];



ll ncr(ll n, ll r)
{

	if(n<0 || r<0)
		return 0;

	if(r==0 || r==n)
		return dp[n][r]= 1;

	if(dp[n][r]!=-1)
		return dp[n][r];


	return dp[n][r]=(ncr(n-1,r-1)%M+ncr(n-1,r)%M)%M;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,r;
	cin>>n>>r;
	if(r>n)
	{
		cout<<-1;
		return 0;
	}
	memset(dp,-1,sizeof(dp));
	cout<<ncr(n-1,r-1)%M;	
	return 0;
}