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
	
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	stack<char> stac;
	int d=0;
	rep(i,0,n)
	{

			if(!stac.empty() )
			{
				if(stac.top()=='M' && s[i]=='I' && d<=k)
				{
					stac.pop();
					d++;
				}
				else
				{
					stac.push(s[i]);
				}
			}
			else
			{
				stac.push(s[i]);
			}

	}
	rep(i,0,n)
	{

			if(s[i]=='M')
			{
				if(!stac.empty())
				{
					if(stac.top()=='M')
					{
						stac.push(s[i]);
						d++;
					}
					else
					{

					}
				}
				else
				{
					stac.push(s[i]);
					d++;
				}
			}
			if(s[i]=='I')
			{
				if(!stac.empty())
				{
					if(stac.top()=='M')
					{

					}
					else
					{
						stac.push(s[i]);
						d++;
					}
				}
				else
				{
					stac.push(s[i]);
					d++;
				}
			}

	}
	return 0;
}