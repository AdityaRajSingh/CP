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
		ll k=0;
		rep(i,0,n)
		{
			cin>>a[i];
			if(a[i]%2==1)
			{
				k++;
			}
		}
		
			if(k==n)
			{
				if(n%2==1)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
			else
			{
				if(k==0)
				{
					cout<<"NO"<<endl;
				}
				else
				{
					
					cout<<"YES"<<endl;
				}
			}
		

	}	







	
	return 0;
}