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

ll rec(ll i)
{
	if(s[i]==r[i])
		rec(i+1);
	else
	{
		return min()
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t; cin>>t;
	while(t--)
	{
		string s,r;
		cin>>s;
		cin>>r;
		ll n=s.length();
		ll l=0;
		rep(i,0,n)
		{
			if(s[i]!=r[i])
			{
				l++;
			}
		}

	}	
	return 0;
}