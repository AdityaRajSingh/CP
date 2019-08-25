/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
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
	
	ll t;
	lli n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	lli r=n%6;
	switch(r)
	{
	case 0:
	{
		cout<<0<<endl;
		break;
	}
	case 1:
	{
		cout<<1<<endl;
		break;
	}
	case 2:
	{
		cout<<4<<endl;
		break;
	}
	case 3:
	{
		cout<<6<<endl;
		break;
	}
	case 4:
	{
		cout<<5<<endl;
		break;
	}
	case 5:
	{
		cout<<2<<endl;
		break;
	}

	}
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}