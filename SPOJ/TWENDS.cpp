#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair
#define N 1001

vector<ll> v;

ll dp[N][N];	
ll ans;
ll rec(ll i,ll j)
{
	if(abs(j-i)<=1)
	{
		return max(v[j],v[i]);
	}
	if(dp[i][j]!=-1)
		return dp[i][j];

	ll x,y;


	if(v[i+1]>=v[j])
	{
		x=rec(i+2,j);
	}
	if(v[i+1]<v[j])
	{
		x=rec(i+1,j-1);
	}


	if(v[i]>=v[j-1])
	{
		y=rec(i+1,j-1);
	}
	if(v[i]<v[j-1])
	{
		y=rec(i,j-2);
	}

	return dp[i][j]=max(v[i]+x,v[j]+y);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,k=1;
	cin>>t;
	while(t)
	{
		ll s=0;
		v.resize(t);
		rep(i,0,t)
		{
			cin>>v[i];
			s+=v[i];
		}
		memset(dp, -1, sizeof(dp));
		ans=0;
		cout<<"In game "<<k<<", the greedy strategy might lose by as many as "<<(2*rec(0,t-1)-s)<<" points."<<endl;
		k++;

		cin>>t;
	}	






	
	return 0;
}