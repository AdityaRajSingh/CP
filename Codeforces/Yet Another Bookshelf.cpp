														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)

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
		ll f=-1,l=-1;
		rep(i,0,n)
		{
			cin>>a[i];
			if(a[i]==1)
			{
				l=i;
				if(f==-1)
					f=i;
			}

		}
		ll k=0;
		rep1(i,f,l)
		{
			if(a[i]==0)
				k++;
		}
		cout<<k<<endl;




	}	
	return 0;
}