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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t; 
	cin>>t;
	while(t--)
	{
		ll n,sn;
		cin>>n;
		vll a;

		string q;
		getline(cin,q);

		string s;
		getline(cin,s);
	
		rep(i,0,s.length())
		{
			char rough;
			char x=s[i];
			if(x==' ')
				continue;
			if(x=='_')
			{
				a.pb(0);
			}
			else
			{
				a.pb(x-'0');
			}
		}
		cin>>sn;

		ll k=-1;
		rep(i,0,n)
		{
			if(s[i]>sn)
			{
				k=i;
			}
		}
		cout<<endl;
		
	}	
	return 0;

}