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

vector<int> d;


vector<int> dp;
int noOfJumps(int i,int n)
{

	if(i==n-1)
	{
		dp[i]=0;
		return 0;
	}
	if(i>n-1)
	{
		return INT_MAX;
	}
	int c=INT_MAX;

	for(int j=1;j<=d[i] && (i+j)<=n-1;j++)
	{
		if(dp[i+j]==-1)
			 c= min(c,1+noOfJumps(i+j,n));
		else
			c= min(c,1+dp[i+j]);
		 
	}
	return dp[i]=c;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		
		for(int i=0;i<x;i++)
		{
			int a;
			cin>>a;
			d.push_back(a);
		}
		for(int i=0;i<100000000;i++)
		{

			dp.push_back(-1);
		}
		int l=noOfJumps(0,x);
		d.clear();
		dp.clear();
		cout<<l<<endl;
		
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}