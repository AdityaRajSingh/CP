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
	
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		rep(i,0,n)
		{
			cin>>a[i];
		}
		ll l=0,ans=0;
		rep(i,0,n)
		{

				if(a[i]==1)
				{
					q++;
				}
				if(a[i]==0 && l<k)
				{
					l++;
				}
				if(a[i]==0 && l>=k)
				{
					ans=max(ans,q+l);
					q=0;
					
				}
		}
	}	
	return 0;
}