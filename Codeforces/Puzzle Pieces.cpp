#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	
	
	ll t,n,m; cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n==1 || m==1)
			cout<<"YES"<<endl;
		else if(n==2 && m==2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}	
	return 0;
}