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
		ll p[n],c[n];
		int k=0;
		rep(i,0,n)
		{
			cin>>p[i]>>c[i];
		}
		if(c[0]>p[0])
		{
			cout<<"NO"<<endl;
			k=1;
		}
		else
		{

			rep(i,1,n)
			{
				if(c[i]<c[i-1] || p[i]<p[i-1])
				{
					cout<<"NO"<<endl;
					k=1;
					break;
				}
				if(c[i]>c[i-1] && p[i]<=p[i-1])
				{
					cout<<"NO"<<endl;
					k=1;
					break;
				}
				if((p[i]-p[i-1]) < (c[i]-c[i-1]))
				{
					cout<<"NO"<<endl;
					k=1;
					break;
				}
			}
		}
		if(k==0)
		{
			cout<<"YES"<<endl;
		}
		
	}	






	
	return 0;
}