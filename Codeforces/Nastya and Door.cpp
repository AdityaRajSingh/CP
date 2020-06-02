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

//l M=1e+9;


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,k; cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n+1];
		rep(i,1,n+1)
			cin>>a[i];

		ll p[n+1];

		p[1]=p[n]=0;

		rep1(i,2,n-1)
		{
			if(a[i]>a[i-1] && a[i]>a[i+1])
			{
				p[i]=p[i-1]+1;
			}
			else
			{
				p[i]=p[i-1];
			}
		}

		// rep1(i,1,n)
		// {
		// 	cout<<p[i]<<" ";
		// }
		// cout<<endl;

		ll l=1;
		ll m=LONG_MIN;
		rep1(i,1,n-k+1)
		{
			ll q=p[i+k-2]-p[i];
			if(q>m)
			{
				l=i;
				m=q;
			}
		}
		
		cout<<m+1<<" "<<l<<endl;


	}	
	return 0;
}