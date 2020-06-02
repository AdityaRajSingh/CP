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
	fast;
	
	ll t; cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		

		int l=n.length();
		vector <int> v;
		for(int i=0;i<=l-1;i++)
		{
			if(n[i]!='0')
			{
				int x=(n[i]-'0')*pow(10,l-i-1);
				v.pb(x);
			}
		}
		cout<<v.size()<<endl;
		rep(i,0,v.size())
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;


	}	
	return 0;
}