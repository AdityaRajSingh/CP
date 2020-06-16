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
ll N=100005;

ll s[100005];
ll x;





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

		cin>>n>>x;
		ll a[n+1];
		ll ans;
		int k=0;
		rep1(i,1,n)
		{
			cin>>a[i];
			
			if(a[i]%x==0)
				k++;
		}

		if(k==n)
		{
			ans=-1;
		}
		else
		{
			
			ll i=0;
			ll j=n;
			s[0]=0;
			s[1]=a[1];
			
			rep1(i,2,n)
			{
				s[i]=s[i-1]+a[i];
			}

			if(s[n]%x!=0)
			{
				ans=n;
			}
			else
			{
				ll f,l;
				rep1(i,1,n)
				{
					if(a[i]%x!=0)
					{
						f=i;
						break;
					}
				}
				rep1(i,1,n)
				{
					if(a[i]%x!=0)
					{
						l=i;
					}
				}
				ll ans1=max(f-1,n-f);
				ll ans2=max(l-1,n-l);	
				ans=max(ans1,ans2);
			}
		}

		
		cout<<ans<<endl;
		
		
		
		



	}	
	return 0;
}