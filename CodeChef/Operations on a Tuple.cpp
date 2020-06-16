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

int f1(ll p, ll q, ll r, ll a, ll b, ll c)
{
	int ans=3;
	if(p==a && q==b || p==a && r==c || q==b && r==c )
	{
		ans=1;
		return ans;
	}
	ll d1=a-p;
	ll d2=b-q;
	ll d3=c-r;
	ll q1,q2,q3;


	ll k1=0;
	if(p!=0 && a%p==0)
	{
		k1=1;
		q1=a/p;
	}

	ll k2=0;
	if(q!=0 && b%q==0)
	{
		k2=1;
		q2=b/q;
	}

	ll k3=0;
	if( r!=0 && c%r==0)
	{
		k3=1;
		q3=c/r;
	}



	if(d1==d2 && d2==d3 ||(k1==1 && k2==1 && k3==1 && q1==q2 && q2==q3))
	{
		ans=1;
	}

	if(p==a && (d2==d3  || (k2==1 && k3==1 && q2==q3) ) )
	{
		ans=1;
	}
	if(q==b && (d1==d3  || (k1==1 && k3==1  && q1==q3) ) )
	{
		ans=1;
	}
	if(r==c && (d2==d1  || (k2==1 && k1==1  && q2==q1) ) )
	{
		ans=1;
	}
	return ans;
}

int f2(ll p, ll q, ll r, ll a, ll b, ll c)
{
	int ans=3;
	if(p==a || r==c || q==b )
	{
		ans=2;
		return ans;
	}
	ll d1=a-p;
	ll d2=b-q;
	ll d3=c-r;
	ll q1,q2,q3;


	ll k1=0;
	if(p!=0 && a%p==0)
	{
		k1=1;
		q1=a/p;
	}

	ll k2=0;
	if(q!=0 && b%q==0)
	{
		k2=1;
		q2=b/q;
	}

	ll k3=0;
	if( r!=0 && c%r==0)
	{
		k3=1;
		q3=c/r;
	}

	if(d1==d2 || d1==d3 ||d2==d3 || (k1==1 && k2==1 && q1==q2) || (k1==1 && k3==1 && q1==q3) || (k3==1 && k2==1 && q2==q3))
	{
		ans=2;
	}
	k1=0,k2=0,k3=0;
	ll r1,r2,r3;
	if(p!=0 )
	{
		k1=1;
		q1=a/p;
		r1=a%p;
	}
	if(q!=0 )
	{
		k2=1;
		q2=b/q;
		r2=b%q;
	}
	if( r!=0)
	{
		k3=1;
		q3=c/r;
		r3=c%r;
	}

	if(k1 && k2 && k3 && (r1==r2 && r2==r3 || r1==0 && r2==r3 || r2==0 && r1==r3 || r3==0 && r2==r1))
	{
		if(k1 && k2 && k3 && ( q1==q2 && q2==q3 || q1==0 && q2==q3 || q2==0 && q1==q3 || q3==0 && q2==r1))
			ans=2;
	}

	
	return ans;
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
		ll p,q,r;
		ll a,b,c;
		cin>>p>>q>>r;
		cin>>a>>b>>c;
		int ans=3;
		if(p==a && q==b && r==c)
		{
			ans=0;
		}
		else
		{
			ans=f1(p,q,r,a,b,c);
			if(ans==3)
			{
				ans=f2(p,q,r,a,b,c);
			}
		}
		cout<<ans<<endl;

	}	
	return 0;
}