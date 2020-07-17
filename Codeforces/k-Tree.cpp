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
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 

ll n,k,d; 
int dp[105][2];
int rec(int sum,int b)
{
	if(sum<0)
		return 0;
	if(sum==0)
	{
		if(b==1)
			return 1;
		else
			return 0;
	}

	if(dp[sum][b]==-1)
	{
		int res=0;
		for(int i=1;i<=k;i++)
		{
			if(i>=d)
			{
				res+=rec(sum-i,1);
				res=res%M;
			}
			else
			{
				res+=rec(sum-i,b);
				res=res%M;
			}
		}
		dp[sum][b]=res;
	}
	
	return dp[sum][b];
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	
	cin>>n>>k>>d;
	memset(dp,-1,sizeof(dp));
	cout<<rec(n,0)%M;


	return 0;
}