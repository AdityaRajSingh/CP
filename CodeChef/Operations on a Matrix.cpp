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
	
	ll t,n,m,q,x,y;
	

	cin>>t;
	while(t--)
	{
		ll rowo=0,rowe=0, colo=0, cole=0;
		cin>>n>>m>>q;
		ll row[n+1]={0},col[m+1]={0};
		for(ll i=1;i<=q;i++)
		{
			cin>>x>>y;
			row[x]++;
			col[y]++;
		}
		for(ll i=1;i<=n;i++)
		{
			
			if(row[i]%2==0)
				rowe++;
			else
				rowo++;
			
		}
		for(ll i=1;i<=m;i++)
		{
			
			if(col[i]%2==0)
				cole++;
			else
				colo++;
			
		}
		cout<< (rowe*colo) + (rowo*cole)<<endl;

	}	








////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}