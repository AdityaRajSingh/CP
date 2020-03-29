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
	
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;

		ll da=a;
		ll db=b;

		ll sm=a+b;

		ll a1=a/10;
		ll a2=a%10;

		ll b1=b/10;
		ll b2=b%10;
		ll sm1=0,sm2=0;

			if(b2>a1)
			{
				ll k1=b2*10+a2;
				ll k2=b1*10+a1;
				//cout<<k1<<" "<<k2<<endl; 
				sm1=k1+k2;
			}
			if(a2>b1)
			{
				ll k1=a2*10+b2;
				ll k2=a1*10+b1;
				//cout<<k1<<" "<<k2<<endl;
				sm2=k1+k2;
			}

			sm=max(sm,sm1);
			sm=max(sm,sm2);
			cout<<sm<<endl;



	}	






	
	return 0;
}