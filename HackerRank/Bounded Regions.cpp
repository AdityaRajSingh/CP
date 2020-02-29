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
		ll ans=0;

		cin>>n;
		

		rep(i,0,n)
		{
			string s;
			cin>>s;
			ll l=s.length();
			rep(j,0,l)
			{

				
				if(s[j]=='a' ||s[j]=='b' ||s[j]=='d' ||s[j]=='e' ||s[j]=='g' ||s[j]=='o' ||s[j]=='p' ||s[j]=='q' ||s[j]=='A' ||s[j]=='D' ||s[j]=='O' ||s[j]=='P' ||s[j]=='Q' ||s[j]=='R'||s[j]=='0' ||s[j]=='6'||s[j]=='9' ||s[j]=='4')
				{
					ans=ans+1;
				}
				if(s[j]=='B' || s[j]=='8')
				{
					ans=ans+2;
				}
			}
			
		}
		
		cout<<ans<<endl;
	}	







	
	return 0;
}