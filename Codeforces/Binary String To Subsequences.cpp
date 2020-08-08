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
		string s;
		vll ans(n);
		cin>>s;
		ll k=1;
		stack <ll> z,o; 
		ll l=1;
		rep(i,0,n)
		{
			if(s[i]=='0')
			{
				if(o.size()==0)
				{
					z.push(k);
					ans[i]=k;
					k++;
				}
				else
				{
					ll f=o.top();
					o.pop();
					ans[i]=f;
					z.push(f);

				}
				
			}
			else
			{
				if(z.size()==0)
				{
					o.push(k);
					ans[i]=k;
					k++;
				}
				else
				{
					ll f=z.top();
					z.pop();
					ans[i]=f;
					o.push(f);
				}
				
			}
			l=max(ans[i],l);
		}
		cout<<l<<endl;
		rep(i,0,n)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;



	}	
	return 0;
}