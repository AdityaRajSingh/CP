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
	
	ll t,n,m,x,y; 
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>x>>y;
		char grid[n][m];
		rep(i,0,n)
		{
			rep(j,0,m)
			{
				cin>>grid[i][j];
			}
		}
		ll ans=0;
		if(2*x>y)
		{
			ll cs=0,cd=0;
			rep(i,0,n)
			{
				ll j=0;
				while(j<m)
				{
					if(grid[i][j]=='.' && j<m-1 && grid[i][j+1]=='.')
					{
						cd++;
						j+=1;
					}
					else if(grid[i][j]=='.')
					{
						cs++;
					}
					j++;
				}
			}
			ans=cs*x+cd*y;
		}
		else
		{
			ll c=0;
			rep(i,0,n)
			{
				rep(j,0,m)
				{
					if(grid[i][j]=='.')
					{
						c++;
					}
				}
			}
			ans=c*x;
		}
		cout<<ans<<endl;
	}	
	return 0;
}