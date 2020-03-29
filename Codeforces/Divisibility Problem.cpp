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
		if(a%b==0)
			cout<<0<<endl;
		else
		{
			ll k=(a/b);
			k=(k+1)*b;
			cout<<k-a<<endl;
		}
	}	
	







	
	return 0;
}