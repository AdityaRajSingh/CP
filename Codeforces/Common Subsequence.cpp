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
	
	ll t,n,m; 
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a[n];
		ll b[m];
		map<ll,ll> mpa;
		rep(i,0,n)
		{
			cin>>a[i];
			mpa[a[i]]++;
		}
		rep(i,0,m)
		{
			cin>>b[i];	
		}

		int k=0;
		rep(i,0,m)
		{
			if(mpa.find(b[i])!=mpa.end())
			{
				k=1;
				cout<<"YES"<<endl;
				cout<<1<<" "<<b[i]<<endl;
				break;
			}
		}
		if(k==0)
			cout<<"NO"<<endl;





	}	
	return 0;
}