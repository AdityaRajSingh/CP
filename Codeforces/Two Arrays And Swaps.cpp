#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


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
		ll a[n],b[n];
		rep(i,0,n)
			cin>>a[i];
		rep(i,0,n)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<ll>());

		rep(i,0,n)
		{
			if(k<1)
				break;
			if(a[i]<b[i])
			{
				k--;
				a[i]=b[i];
			}
			else
			{
				break;
			}
			
		}
		ll s=0;
		rep(i,0,n)
		{
			s+=a[i];
		}
		cout<<s<<endl;




	}	
	return 0;
}