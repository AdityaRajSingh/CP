#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define mk make_pair



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,x,a;
	cin>>t;
	while(t--)
	{
		cin>>x>>a;
		ll s=(a-x)*(a+1);
		ll n=s/(a+1);

		rep(i,1,n)
		{
			s=s-(i-1);
		}
		cout<<s<<endl;
	}	






	
	return 0;
}