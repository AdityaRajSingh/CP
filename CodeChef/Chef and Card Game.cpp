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


ll power(ll a, ll b)
{
	ll sa=0,sb=0;
	while(a>0)
	{
		sa+=a%10;
		a=a/10;
	}
	while(b>0)
	{
		sb+=b%10;
		b=b/10;
	}
	if(sa>sb)
		return 1;
	if(sa==sb)
		return 0;
	if(sa<sb)
		return -1;

}
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
		ll a,b;
		ll sa=0,sb=0;
		rep(i,0,n)
		{
			cin>>a>>b;
			ll x=power(a,b);
			if(x==1)
				sa++;
			if(x==-1)
				sb++;
			if(x==0)
			{
				sa++;
				sb++;
			}
		}
		if(sa>sb)
			cout<<0<<" "<<sa<<endl;
		if(sb>sa)
			cout<<1<<" "<<sb<<endl;
		if(sa==sb)
			cout<<2<<" "<<sb<<endl;




	}	
	return 0;
}