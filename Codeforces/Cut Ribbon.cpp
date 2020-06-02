
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

ll a, b, c;
ll dp[4005];
ll rec(ll n)
{
	
	if(n<0)
		return -1e18;
	if(n==0)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	ll a1=1+rec(n-a);
	ll a2=1+rec(n-b);
	ll a3=1+rec(n-c);
	return dp[n]=max(a3,max(a1,a2));
	}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n;
	memset(dp,-1,sizeof(dp));
	cin>>n>>a>>b>>c;

	cout<<rec(n);

	

	return 0;
}