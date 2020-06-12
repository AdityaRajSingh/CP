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

void fun(ll s, ll d)
{
	if(s==0 || d==0)
	{
		cout<<0<<endl;
		return;
	}
	if(s==1 && d==1)
	{
		cout<<0<<endl;
		return;
	}	

	ll diff=s-d;
	ll ans=0;

	if(diff>=d)
	{
		ans=d;
	}
	else
	{
			while(s>=1 && d>=1 )
			{
				s-=2;
				d-=1;
				ans++;
				if(s<d)
				{
					swap(s,d);
				}
				if(s==1 && d==1)
				{
					break;
				}
			}
	}
	cout<<ans<<endl;
}

void fun2(ll s, ll d)
{
	if(s==0 || d==0)
	{
		cout<<0<<endl;
		return;
	}
	if(s==1 && d==1)
	{
		cout<<0<<endl;
		return;
	}	

	ll diff=s-d;
	ll ans=0;

	if(diff>=d)
	{
		ans=d;
	}
	else
	{
			s-=2*diff;
			d-=diff;
			ans+=diff;	

			ll q1=s/3;
			ll q2=d/3;
			ll r1=s%3;
			ll r2=d%3;
			if(q1==q2)
			{
				ans+=2*q1;
				if(r1==2)
					ans++;
			}
	}
	cout<<ans<<endl;
}






int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,s,d; 
	// for(int i=1;i<=200;i+=1)
	// 	{
	// 		cout<<i<<" ";
	// 		fun(i,i);
	// 	}
	cin>>t;
	while(t--)
	{
		cin>>s>>d;
		ll ans=0;
		if(s>d)
		{
			//fun(s,d);
			fun2(s,d);
		}
		else
		{
			//fun(d,s);
			fun2(d,s);
		}

		// if(s>=d)
		// {
		// 	ll q=s/2;
			
		// 	if(d>=q)
		// 	{
		// 		ans+=q;
		// 		s=s-(q*2);
		// 		d=d-q;
		// 	}
		// 	else
		// 	{
		// 		ans+=d;
		// 		s-=(2*d);
		// 		d-=d;
		// 	}
		// }
		// else
		// {
		// 	 ll q=d/2;
		// 	if(s>=q)
		// 	{
		// 		ans+=q;
		// 		d=d-(q*2);
		// 		s=s-q;
		// 	}
		// 	else
		// 	{
		// 		ans+=s;
		// 		d-=(2*s);
		// 		s-=s;
		// 	}
		// }
		


		
		// cout<<ans<<endl;
		



	}	
	return 0;
}