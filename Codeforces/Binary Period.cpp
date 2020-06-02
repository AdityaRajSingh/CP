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
		string s;
		cin>>s;
		ll l=s.length();
		ll k=0;
		
		rep(i,1,l)
		{
			if(s[i]!=s[i-1])
			{
				k=1;
			}
		}
		if(k==0)
		{
			cout<<s<<endl;
		}
		else
		{
			string ans="";
			ans+=s[0];
			rep(i,1,l)
			{
				if(s[i]==s[i-1])
				{
					
					if(s[i]=='0')
					{
						ans+='1';
					}
					else
					{
						ans+='0';
					}
					ans+=s[i];
				}
				else
				{
					ans+=s[i];
				}
			}
			cout<<ans<<endl;
		}
	}	
	return 0;
}