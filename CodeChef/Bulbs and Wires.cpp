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
	
	ll t,n,k; 
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string a;
		cin>>a;
		ll prev=a[0];
		ll c=0;
		rep(i,1,n)
		{
			if(a[i]!=prev)
			{
				prev=a[i];
				c++;
			}
		}
		if(c>k)
		{
			vector<pair<ll,ll> >  v;
			ll i=0,k1=n-1;
			while(a[i]=='0' && i<n)
			{
				i++;
			}
			if(i!=0)
			{
				v.push_back(make_pair(i,-1));
			}

			if(i!=n)
			{
				while(a[k1]=='0' && k1>=0)
				{
					k1--;
				}
				if(k1!=n-1)
				{
					v.push_back(make_pair(n-k1-1,-1));
				}
			}

			

			rep1(j,i,k1)
			{
				ll d=j;
				while(a[j]=='0' && j<n)
				{
					j++;
				}
				if(j!=d)
				{
					v.push_back(make_pair(j-d,-2));
				}
				
			}

			sort(v.begin(), v.end());
			// rep(i,0,v.size())
			// {
			// 	cout<<v[i].first<<" "<<v[i].second<<endl;
			// }
			// cout<<endl;

			ll ans=0;
			i=0;
			//cout<<c<<" "<<k<<endl;
			while(c>k && i<v.size())
			{
				//cout<<"Hello"<<endl;
				ans+=v[i].first;
				c+=v[i].second;
				i++;
			}
			cout<<ans<<endl;

		}
		else
		{
			cout<<0<<endl;
		}

	}	
	return 0;
}