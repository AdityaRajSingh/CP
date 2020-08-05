#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

ll dp[10001][10001];
ll minCoins(ll a[],ll v,ll n)
{
    if(n==0)
        return INT_MAX-1;
    if(v==0)
        return 0;
    
    
    
    
     if(dp[n][v]!=-1)
        return dp[n][v];
        

    
   
        
    if(a[n-1]>v)
        return dp[n][v]= minCoins(a,v,n-1);
    else
        return dp[n][v]=min(1+minCoins(a,v-a[n-1],n),minCoins(a,v,n-1));
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	ll t,n,v; cin>>t;
	while(t--)
	{
		cin>>v>>n;
		ll a[n];
		memset(dp,-1,sizeof(dp));
		rep(i,0,n)
			cin>>a[i];
	    cout<<minCoins(a,v,n)<<endl;
		




	}	
	return 0;
}