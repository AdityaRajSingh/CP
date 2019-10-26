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
	
	ll t,n,m;
	cin>>t;
	while(t--)
	{

		cin>>n;
		ll a,ae=0,ao=0;
		rep(i,0,n)
		{
			cin>>a;
			if(a%2==0)
			{
				ae++;
			}
			else
			{
				ao++;
			}
		}
		cin>>m;
		ll b,be=0,bo=0;
		rep(i,0,m)
		{
			cin>>b;
			if(b%2==0)
			{
				be++;
			}
			else
			{
				bo++;
			}
		}
		cout<<(ae*be)+(ao*bo)<<endl;
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}