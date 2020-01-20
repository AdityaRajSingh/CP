#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
	
	ll t,n;
	cin>>t;
	rep(i,1,t)
	{
		cin>>n;
		if(n%2!=0)
			cout<<"Case "<<i<<": "<<n<<endl;
		else
		{
			while(n%2==0)
			{
				n=n/2;
			}
			cout<<"Case "<<i<<": "<<n<<endl;
		}
	}	






	
	return 0;
}