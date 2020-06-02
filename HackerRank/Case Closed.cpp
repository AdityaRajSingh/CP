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
	
	string s;
	cin>>s;
	int l=s.length();
	stack <char> stac;
	rep(i,0,l)
	{
		if(s[i]=='#')
		{
			if(!stac.empty())
			stac.pop();
		}
		else
		{
			stac.push(s[i]);
		}
	}
	string ans="";
	while(!stac.empty())
	{
		ans+=stac.top();
		stac.pop();
	}
	reverse(ans.begin(),ans.end());
	cout<<ans;
	return 0;
}