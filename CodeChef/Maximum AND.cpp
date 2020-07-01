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

bool comp(const pair <ll,ll> &p1, const pair<ll,ll> &p2)
{

return (p1.first<p2.first);
	
}


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
		ll a[n];
		ll m=INT_MIN;
		rep(i,0,n)
		{
			cin>>a[i];
			m=max(m,a[i]);
		}


		ll nDigit=log2(m)+1;

		vector<ll> fc(nDigit+1,0);
		for(int i=0;i<=nDigit;i++)
		{
			ll l=1<<i;
			ll c=0;
			for(int j=0;j<n;j++)
			{
				if(l&a[j])
					c++;
			}
			fc[i]=c;
		}
		reverse(fc.begin(), fc.end());

		ll ans=0;

		vector<pair<ll,ll> > v;
		for(int i=0;i<=nDigit;i++)
		{
			ll ag=nDigit-i;
			ll q1=fc[i]*(pow(2,ag));

			pair<ll,ll> p1(q1,ag);
			v.pb(p1);
		}
		
		// for(int i=0;i<=nDigit;i++)
		// {
		// 	cout<<v[i].first<<" "<<v[i].second<<endl;

		// }
		// cout<<endl;

		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());

		// for(int i=0;i<=nDigit;i++)
		// {
		// 	cout<<v[i].first<<" "<<v[i].second<<endl;

		// }


		ll i=0;
		while(i<k)
		{
			ll l=1<<v[i].second;
			ans|=l;
			i++;
		}


		// rep(i,0,nDigit+1)
		// {
		// 	cout<<fc[i]<<endl;
		// }
		cout<<ans<<endl;

		

	}	
	return 0;
}