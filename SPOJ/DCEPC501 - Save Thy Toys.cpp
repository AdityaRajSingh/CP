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
#define N 100005

ll n;
ll a[N];
ll dp[N];
void initialize()
{
	rep(i,0,N)
	dp[i]=-1;
}
ll maxToys(ll i)
{
	if(dp[i]==-1)
	{
		if(i>=n)
			return dp[i]=0;
		if(i==n-1)
			return dp[i]=a[i];

		if(i==n-2)
			return dp[i]=a[i]+a[i+1];

		if(i==n-3)
			return dp[i]=a[i]+a[i+1]+a[i+2];

		return dp[i]=max(max(a[i]+maxToys(i+2),a[i]+a[i+1]+maxToys(i+4)),a[i]+a[i+1]+a[i+2]+maxToys(i+6));
	}
	return dp[i];

}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		rep(i,0,n)
			cin>>a[i];
			initialize();
		cout<<maxToys(0)<<endl;
	}	
	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}