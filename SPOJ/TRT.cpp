#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define mk make_pair
#define N 2005

vector<ll> v;

ll dp[N][N];	
ll ans;
ll l;
ll rec(ll i, ll j)
{
	if(j==i)
	{
		return (l)*v[j];
	}
	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}

	return dp[i][j]=max((l-j+i)*v[i]+rec(i+1,j), (l-j+i)*v[j]+rec(i,j-1));
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,x;
	cin>>t;
	v.push_back(-1);
	rep(i,1,t)
	{
		cin>>x;
		v.push_back(x);
	}	
	l=v.size()-1;
	memset(dp, -1, sizeof(dp));
	ll ans=rec(1,v.size()-1);
	cout<<ans<<endl;




	
	return 0;
}