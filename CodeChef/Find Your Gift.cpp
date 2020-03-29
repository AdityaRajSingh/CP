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

int type(char c)
{
	if(c=='L' || c=='R')
		return 1;
	return 2;
}

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
		string s;
		cin>>s;
		stack<char> stac;

		string s1="";

		s1+=s[0];
		rep(i,1,n)
		{
			if(type(s[i])!=type(s[i-1]))
			{
				s1=s1+s[i];
			}
		}
		ll x=0,y=0;
		rep(i,0,s1.size())
		{
			if(s1[i]=='L')
			{
				x-=1;
			}
			if(s1[i]=='R')
			{
				x+=1;
			}
			if(s1[i]=='U')
			{
				y+=1;
			}
			if(s1[i]=='D')
			{
				y-=1;
			}
		}
		cout<<x<<" "<<y<<endl;

	}	






	
	return 0;
}