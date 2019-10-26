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
	cin>>t;
	while(t--)
	{
		ll x, min=INT_MAX,minpos=-1,max=INT_MIN,maxpos=-1;
		cin>>n;
		rep(i,0,n)
		{
			cin>>x;
			if(x>max)
			{
				max=x;
				maxpos=i;
			}
			if(x<min)
			{
				min=x;
				minpos=i;
			}
		}
		if(minpos<maxpos)
			cout<<min<<" "<<max<<endl;
		else
			cout<<max<<" "<<min<<endl;
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}