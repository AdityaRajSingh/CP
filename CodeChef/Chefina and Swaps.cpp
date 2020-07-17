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
		ll a[n],b[n];
		map<ll,ll> mp;

		rep(i,0,n)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		rep(i,0,n)
		{
			cin>>b[i];
			mp[b[i]]++;
		}

		sort(a,a+n);
		sort(b,b+n);

		ll ans=0;
		vector<ll> v;
		for(auto it:mp)
		{
			if(it.second%2==1)
			{
				ans=-1;
				break;
			}
			for(int i=0;i<it.second/2;i++)
			{
				v.push_back(it.first);
			}
		}

		// rep(i,0,v.size())
		// {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;





		if(ans!=-1)
		{
			vector<int> diffa;
			vector<int> diffv;
			int i=0,j=0;
			while(i<n && j<v.size())
			{
				if(a[i]==v[j])
				{
					i++;j++;
				}
				else
				{
					if(a[i]<v[j])
					{
						
						diffa.pb(a[i]);
						i++;
					}
					if(a[i]>v[j])
					{
						
						diffv.pb(v[j]);
						j++;
					}

				}
			}
			while(i<n)
			{
				diffa.pb(a[i]);
				i++;
			}
			while(j<v.size())
			{
				diffv.pb(b[j]);
				j++;
			}
			sort(diffa.begin(), diffa.end());
			sort(diffv.begin(), diffv.end());


			// rep(i,0,diffa.size())
			// 	cout<<diffa[i]<<" ";

			// cout<<"\t \t";
			// rep(i,0,diffv.size())
			// 	cout<<diffv[i]<<" ";
			// cout<<endl;


			rep(i,0,diffa.size())
			{
				ans+=min(diffa[i],diffv[i]);
			}
		}
		cout<<ans<<endl;

		



	}	
		
	return 0;
}