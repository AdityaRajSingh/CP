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
	
	string t;
	cin>>t;
	ll k=1;
	while(t[0]!='-')
	{
		stack <char> s;
		rep(i,0,t.size())
		{
			if(!s.empty())
			{
				if(s.top()=='{' && t[i]=='}')
				{
					s.pop();
				}
				else
				{
					s.push(t[i]);
				}
			}
			else
			{
				s.push(t[i]);	
			}				
		}

		ll a=0,b=0;
		while(!s.empty())
		{
			if(s.top()=='{')
				a++;
			if(s.top()=='}')
				b++;
			s.pop();
		}
		// if(a==0 && b==0)
		// {
		// 	cout<<k<<". "<<0<<endl;
		// }
		// else if(a>1 && b==0)
		// {
		// 	cout<<k<<". "<<a/2<<endl;
		// }
		// else if(b>1 && a==0)
		// {
		// 	cout<<k<<". "<<b/2<<endl;
		// }
		// else
		// {

		// }
		ll ans=a/2+b/2+a%2+b%2;

		cout<<k<<". "<<(ans)<<endl;
		k++;
		cin>>t;	

	}	







	
	return 0;
}