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
		cin>>n;
		ll a[n];
		ll mw=0;
		rep(i,0,n)
		{
			cin>>a[i];
			mw=max(mw,a[i]);
		}
		vector<ll> v1;
		rep(i,0,n)
		{
			if(a[i]==mw)
			v1.push_back(i);
		}


		
		ll l=v1.size();
		if(l>n/2)
		{
			cout<<0<<endl;
		}
		else if(l==1)
		{
			cout<<n/2<<endl;
		}
		else
		{
			// cout<<"vector"<<endl;
			// rep(i,0,l)
			// {
			// 	cout<<v1[i]<<" ";
			// }
			// cout<<endl;

			ll md=0; 
			rep(i,1,l)
			{
				if(v1[i]-v1[i-1]-1>md)
				{
					md=v1[i]-v1[i-1]-1;
				}
			}
			ll q=v1[0]-v1[l-1]-1+n;

			// cout<<"q="<<q<<endl;
			if(q>md)
			{
				md=q;
			}
			// cout<<"Md="<<md<<endl;
			if(md>=n/2)
			{
				cout<<md-(n/2)+1<<endl;
			}
			else
			{
				cout<<0<<endl;
			}
		}

	}	






	
	return 0;
}