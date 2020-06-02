#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,m,k;
	cin>>n>>m>>k;
	ll mp[100001];
	ll a[n];
	rep(i,0,n)
	{
		cin>>a[i];
		
	}
	
	rep(i,0,n)
	{
		if(mp[a[i]]>0)
		{
			mp[a[i]]--;
		}
		else
		{

		}
		
	}

	return 0;
} 