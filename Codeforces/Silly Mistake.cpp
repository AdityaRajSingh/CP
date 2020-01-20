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
#define N 1000009


 ll f[N];
 vector<int> v;
 vector<int> ans;


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,k=0;
	cin>>n;
	ll a[n];

	rep(i,0,n)
		cin>>a[i];	

	rep(i,0,N)
		f[i]=0;

	rep(i,0,n)
	{
		if(a[i]>0)
		{
			if(f[a[i]]==0)
			{
				f[a[i]]++;
				v.push_back(abs(a[i]));
				
				// rep(j,0,v.size())
				// cout<<v[j]<<" ";
				// cout<<endl;


			}
			else if(f[a[i]]==-1)
			{
				ll z=0;
				rep(j,0,v.size())
				{
					if(f[v[j]]==-1)
					{
						z++;
					}
				}
				if(z==v.size())
				{
					ans.pb(2*z);
					rep(j,0,v.size())
					{
						f[v[j]]=0;
					}
					v.clear();
					v.push_back(abs(a[i]));
					f[a[i]]++;
				}
				else
				{
					k=1;
					break;
				}
			}
			else if(f[a[i]]==1)
			{
				k=1;
				break;
			}
		}
		else
		{
			if(f[abs(a[i])]==0)
			{
				k=1;
				break;
			}
			else if(f[abs(a[i])]==-1)
			{
				k=1;
				break;

			}
			else if(f[abs(a[i])]==1)
			{
				f[abs(a[i])]=-1;
				
			}
		}
		
		

	}

	if(v.size()!=0)
	{
				ll z=0;
				rep(j,0,v.size())
				{
					if(f[v[j]]==-1)
					{
						z++;
					}
				}
				if(z==v.size())
				{
					ans.pb(2*z);
					rep(j,0,v.size())
					{
						f[v[j]]=0;
					}
					v.clear();
				}
				else
				{
					k=1;
				}
	}




	if(k==1)
		cout<<-1;
	else
	{
		cout<<ans.size()<<endl;
		rep(i,0,ans.size())
		{
			cout<<ans[i]<<" ";
		}
	}






	
	return 0;
}