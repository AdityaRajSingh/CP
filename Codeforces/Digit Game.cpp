														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)

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
		
		int ans=0;

		if(n%2==0)
		{
			int k=0;
			rep(i,0,n)
			{
				if((i+1)%2==0 && (s[i]-'0')%2==1)
				k++;

			}
			if(k==n/2)
				ans=1;
			else
				ans=2;
		}
		else
		{

			int k=0;
			rep(i,0,n)
			{
				if((i+1)%2==1 && (s[i]-'0')%2==1)
				k++;

			}
			if(k>=1)
				ans=1;
			else
				ans=2;
		}
		cout<<ans<<endl;	
	}	
	return 0;
}