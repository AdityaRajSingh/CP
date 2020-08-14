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
	
	ll t; 
	cin>>t;
	while(t--)
	{
		ll l;
		cin>>l;
		string str;
		cin>>str;
		
		vll a,s(l+1);

		ll ans=0;
		rep(i,0,l)
		{
			a.pb(str[i]-48);
			if(a[i]==1)
				ans++;
		}
		s[0]=0;
		
		
		rep1(i,1,l)
		{
			s[i]=s[i-1]+a[i-1];

		}

		// rep(i,0,l)
		// {
		// 	cout<<a[i]<<" ";
		// }
		// cout<<endl;

		// rep1(i,0,l)
		// {
		// 	cout<<s[i]<<" ";
		// }
		// cout<<endl;
		
		rep1(i,2,9)
		{
			rep1(j,i,l)
			{
				if((s[j]-s[j-i])==i)
					ans++;
			}
		}
		cout<<ans<<endl;







	}	
	return 0;
}