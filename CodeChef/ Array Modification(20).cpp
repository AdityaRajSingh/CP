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
		rep(i,0,k/2)
		{
			ll a=arr[i%n];
			ll b=arr[n-1-(i%n)];
			arr[i%n]=a^b;
		}
		rep(i,k/2,k)
		{
			ll a=arr[i%n];
			ll b=arr[n-1-(i%n)];
			arr[i%n]=a^b;
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