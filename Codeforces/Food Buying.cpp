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
	
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a=n;
		ll l=0;x
		while(a>0)
		{
			l++;
			a=a/10;
		}
		ll s=0,c=n;
		while(n>0)
		{
			ll rem=n%(ll)pow(10,l-1);
			ll q=n/pow(10,l-1);
			ll d=q*pow(10,l-2);

			s+=d;
			n=rem+d;



			ll w=n;
			l=0;
			while(w>0)
			{
				l++;
				w=w/10;
			}

		}
		cout<<c+s<<endl;
	}	
	




	
	return 0;
}