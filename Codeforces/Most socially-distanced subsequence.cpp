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
		ll a[n+1];
		rep1(i,1,n)
			cin>>a[i];

		vector <ll> ans;

		if(n==2)
		{
			ans.push_back(a[1]);
			ans.push_back(a[2]);
		}

		else
		{
			stack <ll> stac;

			stac.push(a[1]);
			stac.push(a[2]);
			ll f=0;
			if(a[2]>a[1])
				f=1;


			rep1(i,3,n)
			{
				if(a[i]>stac.top() && f==1)
				{
					stac.pop();
					stac.push(a[i]);
				}
				else if(a[i]<stac.top() && f==1)
				{
					stac.push(a[i]);
					f=0;
				}

				else if(a[i]>stac.top() && f==0)
				{
					stac.push(a[i]);
					f=1;
				}
				else if(a[i]<stac.top() && f==0)
				{
					stac.pop();
					stac.push(a[i]);
				}
			}
			
			while(!stac.empty())
			{
				ans.push_back(stac.top());
				stac.pop();
			}
			reverse(ans.begin(), ans.end());			
		}

		
		

		cout<<ans.size()<<endl;
		rep(i,0,ans.size())
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}	
	return 0;
}