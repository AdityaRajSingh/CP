/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
	
	ll t,n,k;
	int p;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>p;
		ll a[n];
		ll max=LLONG_MIN,min=LLONG_MAX;
		ll maxpos=-1,minpos=-1;

		rep(i,0,n)
		{
			cin>>a[i];
			if(a[i]>max)
			{
				max=a[i];
				maxpos=i;
			}
			if(a[i]<min)
			{
				min=a[i];
				minpos=i;
			}
		}

		if(p==0)
		{
			if(k%2!=0)
			{
				cout<<max<<endl;
			}
			else
			{
				if(minpos<maxpos)
				{
					cout<<a[maxpos-1]<<endl;
				}
				else
				{
					cout<<a[maxpos+1]<<endl;
				}
				
			}
		}
		else
		{
			if(k%2!=0)
			{
				cout<<min<<endl;
			}
			else
			{
				if(maxpos<minpos)
				{
					cout<<a[minpos-1]<<endl;
				}
				else
				{
					cout<<a[minpos+1]<<endl;
				}
				
			}
		}
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}