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
	
	ll t,s,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>sum;
		ll a[n];
		rep(i,0,n)
			cin>>a[i];

		ll s=a[0],k=0;
		ll sm=0,km=0;

		rep(i,0,n-1)
		{
			s+=a[i+1];
			k++;
			if(s>sum)
			{
				s-=a[i+1];
				k--;

				if(k>km)
				{
					k=km;
					sm=s;
				}
				if(k==km && s<sm)
				{
					sm=s;
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