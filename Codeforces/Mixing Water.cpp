														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ld i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 


ll t,h,c; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll te;
	cin>>te;
	ll ans=0;
	while(te--)
	{
		cin>>h>>c>>t;
		if(t==h)
			ans=1;
		else
		{
			ld e=(c+h)/2;
			if(t<=e)
				ans=2;
			else
			{
				ll k=(h-t)/((2*t)-h-c);
				ll t1=(k*(h+c)+h)/((2*k)+1);
				ll t2=((k+1)*(h+c)+h)/((2*k)+3);


				ll j1=abs((k*(h+c)+h)-t*(2*k+1))*(2*k+3);
				ll j2=abs(((k+1)*(h+c)+h)-t*(2*k+3))*(2*k+1);
				if(j1<=j2)
				{
					ans=2*k+1;
				}
				else
				{
					ans=2*k+3;
				}

				// if(abs(t1-t)<=abs(t2-t))
				// 	ans=(2*k)+1;
				// else
				// 	ans=(2*(k))+3;
			}
		}
		
		cout<<ans<<endl;
	}	
	return 0;
}