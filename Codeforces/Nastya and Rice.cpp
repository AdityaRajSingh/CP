#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; cin>>t;
	while(t--)
	{
		cin>>n;
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll d1=a-b;
		ll d2=a+b;

		ll d3=c+d;
		ll d4=c-d;

		ll a1=n*d1;
		ll a2=n*d2;

		if((a2>=d4 && a1<=d3)  ) 
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}



	}	
	return 0;
}