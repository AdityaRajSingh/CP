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
#define N 1005


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
		ll a[n];


		rep(i,0,n)
		{
			cin>>a[i];

			

		}

		sort(a,a+n);
		cout<<a[0];
		ll k=0;ll i;

		for( i=1;i<n;i++)
		{
			if(a[i]-a[i-1]==1)
			{
				k++;
			}
			else
			{
				if(k==0)
				{
					cout<<","<<a[i];
				}
				else if(k>=2)
				{
					cout<<"..."<<a[i-1]<<","<<a[i];
					k=0;
				}
				else if(k<2 && k!=0)
				{
					cout<<","<<a[i-1]<<","<<a[i];
					k=0;
				}
			}
		}

		if(k>0)
		{
			if(k==0)
				{
					cout<<","<<a[i];
				}
				else if(k>=2)
				{
					cout<<"..."<<a[i-1];
					k=0;
				}
				else if(k<2 && k!=0)
				{
					cout<<","<<a[i-1];
					k=0;
				}
		}
		cout<<endl;

	


	}	






	
	return 0;
}