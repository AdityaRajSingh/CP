#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

ll M=1e+9;

ll power(ll x, ll y)  
{   ll res = 1; if (x == 0) return 0;
    while (y > 0)  
    {  
        if (y & 1)  res = (res*x) ;     
        y = y>>1; x = (x*x);
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
	
	ll t,n; cin>>t;

	 
	 ll i=1;
	 map<ll,ll> mp;


	ll j=0;
	while(j<999999999)
		{
			i++;
			j=power(2,i)-1;
			mp[j]++;
			
		}

	while(t--)
	{
		cin>>n;
		for(auto it:mp)
		{
			if(n%it.first ==0)
			{
				cout<<n/it.first<<endl;
				break;
			}
		}


	}	
	return 0;
}




