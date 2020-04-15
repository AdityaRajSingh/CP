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
	
	ll t; cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		
		cin>>a>>b>>c>>d;



		if(b==c)
		{
			cout<<b<<" "<<b<<" "<<c<<endl;
		}
		else
		{
			ll y=pow(b,2);
			ll z=pow(c-1,2);
			ll z1=pow(c,2);



		if(y+z>=z1)
			cout<<b<<" "<<c-1<<" "<<c<<endl;
		else
		{
			cout<<b<<" "<<c<<" "<<c<<endl;
		}
		
		}

		}	
	return 0;
}