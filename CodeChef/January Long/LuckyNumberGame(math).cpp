/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,x;
	ll n,a,b;
	cin>>t;
while(t--)
{
		cin>>n>>b>>a;
		ll ao=0,bo=0,ab=0;
		rep(i,0,n)
		{
			cin>>x;
			if(x%b==0)
				bo++;
			if(x%a==0)
				ao++;
			if(x%a==0 && x%b==0 && x!=a && x!=b)
				ab++;
		}


/*		ao=ao-ab;
		bo=bo-ab;*/

		if(ao==bo && ab==0 && a!=b)
		{
			cout<<"ALICE"<<endl;
		}

		if(ao==bo )
		{
			if(a==b)
			{
				if(bo%2==0)
				{
				cout<<"ALICE"<<endl;
				}
				else
				{
				cout<<"BOB"<<endl;
				}

			}
			else
			{
				ao=ao-ab;
				bo=bo-ab;
				if(bo>ao)
				{
					cout<<"BOB"<<endl;
				}
				else
				{
					cout<<"ALICE"<<endl;
				}
			}

		}

		if(ao!=bo && ab==0)
		{
				if(bo>ao)
				{
					cout<<"BOB"<<endl;
				}
				else
				{
					cout<<"ALICE"<<endl;
				}

			
		}
		if(ao!=bo && ab>0)
		{
			ao=ao-ab;
			bo=bo-ab;
				if(bo>ao)
				{
					cout<<"BOB"<<endl;
				}
				else
				{
					cout<<"ALICE"<<endl;
				}

			
		}




	}	
	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}