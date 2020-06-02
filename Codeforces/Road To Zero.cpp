#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;

ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;
    while (y > 0)  
    {  
        if (y & 1)  res = (res*x) % M;     
        y = y>>1; x = (x*x) % M;
    }  
    return res;  
} 

ll modInverse(ll a, ll M) 
{ 
    ll g = __gcd(a, M); 
    if (g != 1) return -1; 
    else return(power(a, M-2, M)); 
} 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,x,y,a,b; 
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		cin>>a>>b;


		
		ll ans=0;
		if(x==0 && y==0)
		{
			cout<<0<<endl;
		}
		if(x==0 && y!=0)
		{
			cout<<a*y<<endl;
		}
		if(y==0 && x!=0)
		{
			cout<<a*x<<endl;
		}

		if(x>0 && y>0)
		{
			if(x>y)
			{
				if((2*a)>=b)
				{
					ans+=y*b;
				}
				else
				{
					ans+=y*(2*a);
				}
				ans+=(x-y)*a;
			}
			else
			{
				if((2*a)>=b)
				{
					ans+=x*b;
				}
				else
				{
					ans+=x*(2*a);
				}
				ans+=(y-x)*a;
			}
			cout<<ans<<endl;
		}
		



	}	
	return 0;
}