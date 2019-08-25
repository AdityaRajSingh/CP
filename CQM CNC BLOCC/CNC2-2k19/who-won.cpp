#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
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
//////////////////////////////////////////////////////////////////////
	
	ll t,n,q;
	cin>>t;
	rep(i,0,t)
	{
	ll sa=0,sb=0;
	cin>>q;

	rep(j,0,q)
	{
		cin>>n;

	if(j%2==0)
	{
		if(n<4)
			sa=sa+2;
		else
			sb=sb+1;
	}
	else
	{
		if(n>3)
			sb=sb+2;
		else
			sa=sa+1;
	}
}
	if(sa>sb)
		cout<<"Alice"<<endl;
	else if(sb>sa)
		cout<<"Bob"<<endl;
	else
		cout<<"Draw"<<endl;
	
}







//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}