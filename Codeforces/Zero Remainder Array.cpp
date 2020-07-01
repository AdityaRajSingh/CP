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
	
	ll t,n,k; 
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n];
		ll r[n];
		map<ll,ll> mp;
		ll m=INT_MIN;
		rep(i,0,n)
		{
			cin>>a[i];
			r[i]=a[i]%k;
			if(r[i]!=0)
			{
				if(a[i]<k)
				{
					r[i]=k-a[i];
				}
				else
				{
					r[i]=k-r[i];
				}
			}
			
			mp[r[i]]++;
			m=max(m,r[i]);
		}


		ll mf=INT_MIN;
		for(auto it: mp)
		{
			mf=max(mf,it.second);
		}
		//cout<<m<<" ";
		ll ans=0;
		if(m==0)
			ans=0;
		else
		{
			ll f=mf;
			// rep(i,0,n)
			// {
			// 	if(r[i]==m)
			// 		f++;
			// }
			 ans=m+1;
			rep(i,1,f)
			{
				ans+=k;
			}
		}
		
		cout<<ans<<endl;
		





	}	
	return 0;
}