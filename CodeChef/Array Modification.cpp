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
	
	ll t,n,k;
	cin>>t;
	while(t--)
	{

		cin>>n>>k;
		ll arr[n];
		rep(i,0,n)
		{
			cin>>arr[i];
		}
		
		ll q=k/n;

		ll r1=q%3;
		ll r2=k%n;

		
		
		if(r1==0)
		{
			if(q>=1)
			{
				if(n%2!=0)
				{
					arr[n/2]=0;
				}
			}
			rep(i,0,r2)
			{
				ll a=arr[i];
				ll b=arr[n-1-(i)];
				arr[i]=a^b;
			}

		}
		else if(r1==1)
		{
			rep(i,0,n)
			{
				ll a=arr[i];
				ll b=arr[n-1-(i)];
				arr[i]=a^b;
			}
			rep(i,0,r2)
			{
				ll a=arr[i];
				ll b=arr[n-1-(i)];
				arr[i]=a^b;
			}

		}
		else if(r1==2)
		{
			rep(i,0,n)
			{
				ll a=arr[i];
				ll b=arr[n-1-(i)];
				arr[i]=a^b;
			}
			rep(i,0,n)
			{
				ll a=arr[i];
				ll b=arr[n-1-(i)];
				arr[i]=a^b;
			}
			rep(i,0,r2)
			{
				ll a=arr[i];
				ll b=arr[n-1-(i)];
				arr[i]=a^b;
			}

		}

		
		

		rep(i,0,n)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}