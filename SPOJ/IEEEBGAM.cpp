/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

#define rep(i,a,b) for(ll i=a;i<b;i++)

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	double ans=((double)n/(n+1));
	printf("%.8lf\n",ans);
	}	






////////////////////////////////////////////////////////////////////////////////////////////

	
	return 0;
}