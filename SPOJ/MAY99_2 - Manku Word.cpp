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

ll power(ll a, ll b)
{
	if(b==0)
	{
		return 1;
	}
	ll x=power(a,b/2);
	if(b%2==0)
	{
		
		return x*x;
	}
	else
	{
		return a*x*x;
	}
	
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll q=1,k=0,s=1;
		while(s<n)
		{
			ll prev=s;
			q=q*5;
			k++;
			s+=q;
		}
		ll sub=n-prev;
		for(ll i=1;i<=sub;i++)
		{
			
		}

	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}