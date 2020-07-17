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
	
	ll t,n,m; 
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a[n][m];

		rep(i,0,n)
		{
			rep(j,0,m)
			{
				cin>>a[i][j];
			}
		}
		ll ans=0;
		rep(i,0,n)
		{
			rep(j,0,m)
			{
				ll mn=0;
				if(i==0 || i==n-1)
					mn+=1;
				else
					mn+=2;

				if(j==0 || j==m-1)
					mn+=1;
				else
					mn+=2;

				//cout<<i<<" "<<j<<"\t\t"<<a[i][j]<<" "<<mn<<endl;
				if(a[i][j]>mn)
				{
					//cout<<i<<" "<<j<<"\t\t"<<a[i][j]<<" "<<mn<<endl;
					ans=-1;
					break;
				}
			}
			if(ans==-1)
				break;
		}

		if(ans!=-1)
		{
			ll b[n][m];
			rep(i,0,n)
			{
				rep(j,0,m)
				{
					ll mn=0;
					if(i==0 || i==n-1)
						mn+=1;
					else
						mn+=2;

					if(j==0 || j==m-1)
						mn+=1;
					else
						mn+=2;

					b[i][j]=mn;
				}
			}
			cout<<"YES"<<endl;
			rep(i,0,n)
			{
				rep(j,0,m)
				{
					cout<<b[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}




	}	
	return 0;
}