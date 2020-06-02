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
	
	ll t,n; cin>>t;
	while(t--)
	{
		cin>>n;ll a[n];
		rep(i,0,n)
			cin>>a[i];

		ll k=0;
		for(ll i=n-2;i>=0;i--)
		{
			if(a[i]<a[i+1])
			{
				k=1;
			}
		}
		if(k==0)
		{
			cout<<-1<<endl;
		}	
		else
		{
			ll pos2=0,pos1=0,min=LONG_MAX;
			for(ll i=n-2;i>=0;i--)
			{
				if(a[i]<a[i+1])
				{
					pos1=i;
					rep(j,i+1,n)
					{
						if(a[j]-a[i]>0 && a[j]-a[i]<min)
						{
							min=a[j]-a[i];
							pos2=j;
						}
					}
					break;
				}
			}
			ll temp=a[pos2];
			 a[pos2]=a[pos1];
			 a[pos1]=temp;
			sort(a+pos1+1,a+n);
			rep(i,0,n)
			{
				cout<<a[i];
			}
			cout<<endl;
		}





	}	
	return 0;
}