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

ll dp[N];	
ll l,ans;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,x;
	cin>>t;
	
	rep(i,0,t)
	{
		cin>>x;
		v.push_back(x);
	}	
	l=v.size();


	memset(dp, -1, sizeof(dp));

	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	ll m=INT_MAX;
	rep(i,4,N)
	{
		
		ll s=sqrt(i);
		if(s*s==i)
			dp[i]=1;
		else
		{
			ans=INT_MAX;
			for(ll j=1;j<=i/2;j++)
			{
				if(dp[j]+dp[i-j]<ans)
					ans=dp[j]+dp[i-j];
			}
			dp[i]=ans;	
		}
		
	}

	rep(i,0,v.size())
	{
		cout<<dp[v[i]]<<endl;
	}




	
	return 0;
}