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
	
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n%2==1 && m%2==1)
		{
			rep(i,0,n)
			{
				rep(j,0,m)
				{
					if((i+j)%2==0)
						cout<<"B";
					else
						cout<<"W";
				}
				cout<<endl;
			}
		}

		else
		{
			int k=0;
			rep(i,0,n)
			{
				rep(j,0,m)
				{
					if((i+j)%2==0)
						cout<<"B";
					else
					{
						if(k==0)
						{
							cout<<"B";
							k=1;
						}
						else
							cout<<"W";
					}
				}
				cout<<endl;
			}
		}
		
	}	






	
	return 0;
}