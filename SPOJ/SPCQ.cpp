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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n;
	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld",&n);
	while(1)
	{
	ll d=n;
	ll s=0;
	while(d>0)
	{
		s=s+d%10;
		d=d/10;
	}

	if(n%s==0)
		break;
	else
		n++;
	}

	printf("%lld\n",n);
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	return 0;
}