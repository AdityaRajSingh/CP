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
	
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;

		ll a[n],b[n],c[n];
		rep(i,0,n)
		cin>>a[i];

		rep(i,0,n)
		cin>>b[i];

		rep(i,0,n)
		{
			c[i]=b[i]-a[i];
		}

		ll start=-1,k=0;
		rep(i,0,n)
		{
			if(c[i]<0)
			{
				cout<<"NO"<<endl;
				k=1;
				break;
			}

			if(c[i]>0 && start==-1)
			{
				if(i>0)
				{
					if(c[i-1]==0)
						start=i;
				}
				if(i==0)
				{
					start=i;
				}
			}
			else if(c[i]>0 && start!=-1)
			{
				if(c[i]!=c[i-1])
				{
					cout<<"NO"<<endl;
					k=1;
					break;
				}
			}
		}
		if(k!=1)
			cout<<"YES"<<endl;

	}	






	
	return 0;
}