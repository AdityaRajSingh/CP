														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,a,b) for(int i=a;i<=b;i++)
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	int t,n; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		string a;
		cin>>a;

		int k=0,c=0;

		vector<char> s;
		s.pb(a[0]);

		if(a[0]=='1')
			k=1;

		rep(i,1,n)
		{
			if(a[i]=='1')
				k=1;

			if(s[c]=='0' && a[i]=='0' && k==1)
			{

			}
			else
			{
				s.pb(a[i]);
				c++;	
			}
		}

		n=c+1;
		stack<char> stac;

		stac.push(s[0]);
		rep(i,1,n)
		{
			if(s[i]=='0')
			{
				while(!stac.empty() && stac.top()=='1')
				{
					stac.pop();
				}
				stac.push(s[i]);
			}
			else
			{
				stac.push(s[i]);
			}
		}





		
		vector<char> ans;
		while(!stac.empty())
		{
			ans.pb(stac.top());
			stac.pop();
		}
		reverse(ans.begin(), ans.end());
		rep(i,0,ans.size())
		cout<<ans[i];
		cout<<endl;



	}	
	return 0;
}