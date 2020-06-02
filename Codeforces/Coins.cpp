#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)

 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n;
	cin>>n;
	ll k=0;
	ll i=2;
	if(n>1)
		cout<<n<<" ";
	while(n>1 && i<=sqrt(n))
	{
		if(n%i==0)
		{
			cout<<n/i<<" ";
			n=n/i;
			i=1;
		}
		i++;
	}	
	cout<<1<<" ";
	return 0;
}