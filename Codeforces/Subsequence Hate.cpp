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


ll min(ll a, ll b, ll c)
{
	return min(min(a,b),c);
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
		string str;
		cin>>str;
		int l=str.length();
		
		int c1=0,c0=0;
		for(int i=0;i<l;i++)
		{
			if(str[i]=='1')
				c1++;
			else
				c0++;
		}
		ll ans=INT_MAX;
		int l1=0,l0=0;
		for(int i=0;i<l;i++)
		{
			if(str[i]=='1')
				l1++;
			else
				l0++;

			ll t1=l0+(c1-l1);
			ll t2=l1+(c0-l0);

			ans=min(ans,t1,t2);
		}
		ans=min(ans,c1,c0);	
		cout<<ans<<endl;
	}	
	return 0;
}

