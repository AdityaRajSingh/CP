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
	
	ll t;
	ll n,b,a;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>n>>b>>a;
		ll ao=0,bo=0,ab=0;
		rep(i,0,n)
		{
			cin>>x;
			if(x%b==0)
				bo++;
			if(x%a==0)
				ao++;
			if(x%a==0 && x%b==0 )
				ab++;
	    }
	    ll d=ao-bo;

/*	    if(a==b)
	    {
	    	if(ao%2!=0)
	    		cout<<"BOB"<<endl;
	    	else
	    		cout<<"ALICE"<<endl;
	    }
	    else
	    {*/

	    if((ab-d)>=1)
	    {
	    	cout<<"BOB"<<endl;
	    }
	    else 
	    {
	    	cout<<"ALICE"<<endl;	
	    }

		//}
}








////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}