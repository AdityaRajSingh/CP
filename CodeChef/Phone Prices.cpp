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
	
	ll t,n,min;
	cin>>t;
	while(t--)
	{
		ll a[105],k=1;
		cin>>n;
		rep(i,0,n)
			cin>>a[i];
		min=a[0]; 

		if(n>=7)
		{
			for(ll i=1;i<6;i++)
			{
				if(a[i]<min)
				{
					k++;
					min=a[i];
				}
			}
			rep(i,6,n)
			{
				if(a[i]<min)
				{
					k++;
					min=a[i];
				}
				else
				{
					ll smin=INT_MAX;
					for(ll j=i-1;j>=i-5;j--)
					{
						if(a[j]<smin)
						{
							smin=a[j];
						}
					}
					if(a[i]<smin)
					{
						k++;
						smin=a[i];
					}
					min=smin;
				}
			}
		}

		else
		{
			rep(i,1,n)
			{
				if(a[i]<min)
				{
					k++;
					min=a[i];
				}
			}
		}
		
		cout<<k<<endl;
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}