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

map<ll,ll> mp;
void f()
{
	ll n=1000000005;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i+1;j<=n;j++)
		{
			ll x=(i*j/__gcd(i,j));

		}
	}
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,l,r; 
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		
		ll x,y;


			ll d=l*2;
			if(d<=r)
			{
				x=l;
				y=d;
			}
			else
			{
				x=-1;
				y=-1;
			}
			cout<<x<<" "<<y<<endl;


	}	
	return 0;
}