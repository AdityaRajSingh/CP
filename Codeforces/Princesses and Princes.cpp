#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair



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

		ll mp[n+5];
		
		vector<vector<ll>> v(n);
		
		rep(i,0,n)
		{
			mp[i+1]=1;
			ll l;
			cin>>l;

			rep(j,0,l)
			{
				ll x;
				cin>>x;
				v[i].pb(x);
				
			}
		}

		// rep(i,0,n)
		// {
		// 	rep(j,0,v[i].size())
		// 	{
		// 		cout<<v[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		vector<ll> p;
		


		rep(i,0,n)
		{
			int d=0;
			rep(j,0,v[i].size())
			{
				if(mp[v[i][j]]==1)
				{
					mp[v[i][j]]=0;
					d=1;
					break;
				}
			}
			if(d==0)
			{
				p.push_back(i+1);
			}
		}




		if(p.empty())
		{
			cout<<"OPTIMAL"<<endl;
		}


		else
		{
			for(int i=1;i<=n+1;i++)
			{
				if(mp[i]==1)
				{
					cout<<"IMPROVE"<<endl;
					cout<<p[0]<<" "<<i<<endl;
					break;
				}
			}	
		}	
	}	






	
	return 0;
}