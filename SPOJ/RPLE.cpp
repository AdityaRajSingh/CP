#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,r;
	cin>>t;
	rep(i,0,t)
	{
		ll a[10005]={0};
		ll r1[10005];
		ll r2[10005];
		cin>>n>>r;
		rep(i,0,r)
		{
			cin>>r1[i]>>r2[i];

		}
		rep(i,0,r)
		{
			a[r1[i]]++;
		}

		ll k=0;
		
		rep(i,0,r)
		{
			if(a[r2[i]]>0)
				k=1;
		}	
		if(k>0)
		{
			cout<<"Scenario #"<<i+1<<": spied"<<endl;
		}
		else
		{
			cout<<"Scenario #"<<i+1<<": spying"<<endl;
		}	


	}	






	
	return 0;
}