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
	
	ll n;
	cin>>n;
	int a[n];
	int b[n];
	rep(i,0,n)
	{
		cin>>a[i];
		b[i]=1;
	}
	rep(i,1,n)
	{
		rep(j,0,i)
		{
			if(a[i]>a[j] && b[i]<b[j]+1)
			{
				b[i]=b[j]+1;
			}
		}
	}
	int ans=-1;
	rep(i,0,n)
	{
		ans=max(ans,b[i]);
	}	
	cout<<ans;
	return 0;
	}
		 