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

ll n,c; ll a[100005];

bool f(ll d)
{
	ll j=1, i=0;
	ll f=1;
	while(j<n)
	{
		if(a[j]-a[i]>=d)
		{
			i=j;
			f++;
		}
		j++;
		if(f>=c)
		{
			break;
		}
	}
	if(f>=c)
		return true;
	return false;
}





int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t; 
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		
		rep(i,0,n)
			cin>>a[i];

		sort(a,a+n);
		
		ll low=1,high=a[n-1];
		while(low<high)
		{

			ll mid=low+(high-low)/2;
			if(f(mid))
			{
				low=mid+1;
			}
			else
			{
				high=mid;
			}
		}
		cout<<low-1<<endl;
	}	
	return 0;
}