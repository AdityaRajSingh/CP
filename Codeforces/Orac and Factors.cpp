#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define N 1000006
ll a[N];
void precompute()
{
	rep(i,2,N)
	{
		ll f=0;
		for(ll j=2;j*j<=N;j++)
		{
			if(i%j==0)
			{
				a[i]=j;
				f=1;
				break;
			}
		}
		if(f==0) 
		{
			a[i]=N;
		}
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,k; cin>>t;
	precompute();
	while(t--)
	{
		ll ans=0;
		cin>>n>>k;
		if(n%2==0)
		{
			ans=n+(k*2);
		}
		else
		{
			ans=n+a[n];
			k--;
			ans+=k*2;
		}
		cout<<ans<<endl;


	}	
	return 0;
}