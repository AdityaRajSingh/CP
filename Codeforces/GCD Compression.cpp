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
		n=2*n;
		ll a[n+1];
		
		rep1(i,1,n)
			cin>>a[i];

		ll e=0,o=0;
		vector<ll> vo,ve;
		rep1(i,1,n)
		{
			if(a[i]%2==0)
			{
				e++;
				ve.pb(i);
			}
			else
			{
				o++;
				vo.pb(i);
			}
		}

		// cout<<"o= "<<o<<endl;
		// cout<<"e= "<<e<<endl;


		if(o>0)
		{
			if(o%2==0)
			{
			 	//o do kum
				for(ll i=0;i<vo.size()-2;i+=2)
				{
					cout<<vo[i]<<" "<<vo[i+1]<<endl;
				}
				for(ll i=0;i<ve.size();i+=2)
				{
					cout<<ve[i]<<" "<<ve[i+1]<<endl;
				}

			}
			else
			{
				// o ek jum
				// o ek kum
				for(ll i=0;i<vo.size()-1;i+=2)
				{
					cout<<vo[i]<<" "<<vo[i+1]<<endl;
				}
				for(ll i=0;i<ve.size()-1;i+=2)
				{
					cout<<ve[i]<<" "<<ve[i+1]<<endl;
				}
			}
		}
		else
		{
			for(ll i=0;i<ve.size()-2;i+=2)
				{
					cout<<ve[i]<<" "<<ve[i+1]<<endl;
				}
		}

	}	
	return 0;
}