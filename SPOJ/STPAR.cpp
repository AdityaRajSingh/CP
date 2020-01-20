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
	while(t!=0)
	{
		ll a[10005];
		stack <ll> s1;
	
		rep(i,0,t)
		{
			cin>>a[i];
		}
		ll q=1;
		rep(i,0,t)
		{

			while(!s1.empty() && q==s1.top())
			{
				s1.pop();
				q++;
			}
			
			if(a[i]==q)
			{
				q++;
			}
			else
			{
				s1.push(a[i]);
			}
		}
		while(!s1.empty() && q==s1.top())
			{
				s1.pop();
				q++;
			}
			if(s1.empty())
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		cin>>t;
	}	






	
	return 0;
}