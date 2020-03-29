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
	
	ll t;
	cin>>t;
	
	while(t--)
	{
		string s;
		ll k,x;
		cin>>s;
		cin>>k>>x;
		int l=s.length();
		char f[26]={0};
		for(int i=0;i<l;i++)
		{
			if(f[s[i]-'a']<x )
			{
				f[s[i]-'a']++;
			}
			else if(f[s[i]-'a']>=x && k>0)
			{
				k--;
			}
			else 
			{
				cout<<i<<endl;
				break;
			}
		}
	}	






	
	return 0;
}