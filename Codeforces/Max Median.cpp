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
ll n,k,x,j;
cin>>n>>k;
vll v;
rep(i,0,n)
{
	cin>>x;
	v.pb(x);
}
sort(v.begin(),v.end());
ll itr=(n+1)/2;
for(ll i=itr;i<n;i++)
{
	while(k>0 && v[i-1]<v[i])
	{
		
		for( j=itr-1;j<i;j++)
		{
			if(k>0)
				v[j]++;k--;
		}
	}
	while(k>0 && v[i-1]<=v[i])
	{
		
		for( j=itr-1;j<i;j++)
		{
			if(k>0)
				v[j]++;k--;
		}
	}
}
cout<<v[itr-1];





////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}