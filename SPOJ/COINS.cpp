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
#define N 1000000000

map<ll,ll> mp;

ll dp(ll n)
{
	if(n==1 || n==0)
		return n;

	if(mp.find(n)!=mp.end())
		return mp[n];

	return mp[n]=max(n,(dp(n/2)+dp(n/3)+dp(n/4)));
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n;
	
	while(cin>>n)
	{
		cout<<dp(n)<<endl;
	}	






	
	return 0;
}