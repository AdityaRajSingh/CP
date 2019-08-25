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
	
ll q,x;

cin>>q;
while(q--)
{
	vll a;
	ll n;
	cin>>n;

	ll maxind=0;
	ll minind=0;

	ll maxn=0;
	ll minn=99999;


	rep(i,0,n)
	{
		cin>>x;
		a.pb(x);

		if(x>maxn)
		{
			maxn=x;
			maxind=i;
		}
		if(x<minn)
		{
			minn=x;
			minind=i;
		}

	}
	int k=0;
	rep(i,1,n)
	{
		if(abs(a[i]-a[i-1])!=1)
		{
			k++;
		}
	}
	if(((abs(maxind-minind)==n-1 || abs(maxind-minind)==1)) && k<=1 )
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}