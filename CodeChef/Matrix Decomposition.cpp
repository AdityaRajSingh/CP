#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

ll M=1000000007;

ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;
    while (y > 0)  
    {  
        if (y & 1)  res = (res*x) % M;     
        y = y>>1; x = (x*x) % M;
    }  
    return res;  
} 



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,a; cin>>t;
	while(t--)
	{
		
		cin>>n>>a;

		ll ans=0;
		ll init=a;


		for(ll i=1;i<=n;i++)
		{
			ll d=(2*i)-1;
			

			ll local=power(init,d,M);
			//cout<<init<<endl;
			init*=local;
			init=init%M;
			ans+=local;
			ans=ans%M;
		}
		cout<<ans<<endl;


	}	
	return 0;
}