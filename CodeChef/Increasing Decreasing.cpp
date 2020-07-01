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
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 

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
		ll N=200005;
		ll f[N]={0};
		ll m=INT_MIN;
		rep(i,0,n)
		{
			cin>>a[i];
			f[a[i]]++;
			m=max(m,a[i]);
		}
		int fl=1;
		rep(i,0,m)
		{
			if(f[i]>2)
			{
				fl=0;
				break;
			}
		}
		if(f[m]>1)
		{
			fl=0;
		}
		vector<int> ans;
		if(fl==1)
		{
			rep1(i,0,m)
			{
				if(f[i]>=1)
					ans.pb(i);
			}
			for(int j=m-1;j>=0;j--)
			{
				if(f[j]>1)
				{
					ans.pb(j);
				}
			}
			cout<<"YES"<<endl;
			rep(i,0,ans.size())
				cout<<ans[i]<<" ";
			cout<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}	
	return 0;
}