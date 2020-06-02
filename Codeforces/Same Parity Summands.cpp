#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,k; cin>>t;
	while(t--)
	{
		vector <ll> ans;
		int f=0;
		cin>>n>>k;
		if(k>n)
		{
			f=1;
		}
		else if(n%2==1 && k%2==0)
		{
			f=1;
		}

		else 
		{
			if(n%k==0)
			{
				rep(i,0,k)
				{
					ans.pb(n/k);
				}
			}
			else
			{
				ll q=n/k;
				ll diff=n-(q*k);

				if((q%2==0)&& (diff%2==1))
				{
					if(q>=2)
					{
						rep(i,0,k-1)
						{
							if(i%2==0)
								ans.pb((n/k)-1);
							else
								ans.pb((n/k)+1);
						}
						if(k%2==0)
						{
							ans.pb((n/k)+1+diff);
						}
						else
						{
							ans.pb((n/k)+diff);
						}
					}
					else
					{
						f=1;
					}
				}




				else if((q%2==1)&& (diff%2==0))
				{
					rep(i,0,k-1)
					{
						ans.pb(n/k);
					}
					ans.pb((n/k)+diff);
				}
				else if((q%2==1)&& (diff%2==1))
				{
					if(q>2)
					{
						rep(i,0,k-1)
						{
							if(i%2==0)
								ans.pb((n/k)-1);
							else
								ans.pb((n/k)+1);
						}
						if(k%2==0)
						{
							ans.pb((n/k)+1+diff);
						}
						else
						{
							ans.pb((n/k)+diff);
						}
					}
					else
					{
						f=1;
					}
				}
				else if((q%2==0)&& (diff%2==0))
				{
					rep(i,0,k-1)
					{
						ans.pb(n/k);
					}
					ans.pb((n/k)+diff);					
				}
			}
		}
		if(f==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			rep(i,0,ans.size())
			{
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
		

	}	
	return 0;
}