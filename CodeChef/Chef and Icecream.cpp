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
		ll d[n];
		
		ll c5=0,c10=0;
		rep(i,0,n)
		{
			cin>>a[i];
			d[i]=a[i]-5;
		}
		int f=1;
		rep(i,0,n)
		{
			if(d[i]==0)
			{
				c5++;
			}
			if(d[i]==5)
			{
				if(c5>0)
				{
					c5--;
					c10++;
				}
				else
				{
					f=0;
					break;
				}
			}
			if(d[i]==10)
			{

				if(c5>1 && c10>0)
				{
					c10--;
				}
				else if(c5>1 && c10<=0)
				{
					c5-=2;
				}
				else if(c10>0 && c5<=1)
				{
					c10-=1;
				}
				else
				{
					f=0;
					break;
				}
			}
		}
		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}	
	return 0;
}