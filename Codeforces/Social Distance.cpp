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
		string s;
		cin>>n>>k;
		cin>>s;
		ll f=-1,l=-1;
		rep(i,0,n)
		{
			if(s[i]=='1')
			{
				f=i;
				break;
			}

		}
		rep(i,0,n)
		{
			if(s[i]=='1')
			{
				l=i;
			}
		}




		ll ans=0;

		if(f!=-1)
		{
			ll c;
			c=f-k;
			if(c<=0)
				ans+=0;
			else if(c>0 && (c/k) <1)
					ans+=1;
				else if(c>0 && (c/k) >=1)
				{
					ll q=c/k;
					q++;
					while((c-q)<k*(q-1))
					{
						q--;
					}
					ans+=q;
				}
		}
		if(l!=-1)
		{
			ll c=n-l-1;
			c=c-k;
			if(c<=0)
				ans+=0;
			else if(c>0 && (c/k) <1)
					ans+=1;
				else if(c>0 && (c/k) >=1)
				{
					ll q=c/k;
					q++;
					while((c-q)<k*(q-1))
					{
						q--;
					}
					ans+=q;
				}
		}
		ll c=0;

		if(f!=-1 && l!=-1)
		rep1(i,f+1,l)
		{
			if(s[i]=='0')
			{
				c++;
			}
			if(s[i]=='1')
			{
				c=c-2*k;
				if(c<=0)
					ans+=0;
				else if(c>0 && (c/k) <1)
					ans+=1;
				else if(c>0 && (c/k) >=1)
				{
					ll q=c/k;
					q++;
					while((c-q)<k*(q-1))
					{
						q--;
					}
					ans+=q;
				}
				c=0;
			}
		}
		else
		{
			ll c=n;
			if(c<=0)
				ans+=0;
			else if(c>0 && (c/k) <1)
					ans+=1;
				else if(c>0 && (c/k) >=1)
				{
					ll q=c/k;
					q++;
					while((c-q)<k*(q-1))
					{
						q--;
					}
					ans+=q;
				}
		}

		cout<<ans<<endl;


	}	
	return 0;
}