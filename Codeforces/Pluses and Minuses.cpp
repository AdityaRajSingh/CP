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
		string s;
		cin>>s;
		int l=s.length();
		stack<char> stac;
		ll res=0;
		int k=0;
		int q=0;
		rep(i,0,l)
		{
			if(stac.empty())
			{
				if(s[i]=='-')
					k++;
				else
				{
					int d=(k*(k+1))/2;
					d+=k;
					res+=d;
					k=0;
					stac.push('+');
					res++;
				}
			}
			else
			{
				if(s[i]=='+')
				{
					
					if(q>stack.size())
					{
						res+=
					}
					else
					{
						
					}

					stac.push('+');
					res++;
				}
				else
				{
					//stac.pop();
					//res++;
					q++;
				}
			}
		}
		ll d=(k*(k+1))/2;
		d+=k;
		res+=d;
		cout<<res<<endl;	
	}
	return 0;
}