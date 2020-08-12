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
	
	ll t,r,g,b,w; 
	cin>>t;
	while(t--)
	{
		cin>>r>>g>>b>>w;
		string ans="-1";
		if(r==0 || g==0 || b==0)
		{
			ll k=0;
			if(r%2==1)
				k++;
			if(g%2==1)
				k++;
			if(b%2==1)
				k++;
			if(w%2==1)
				k++;
			if(k<=1)
				ans="Yes";
			else
				ans="No";
		}
		else
		{
			ll mrgb=INT_MAX;
			mrgb=min(r,min(g,b));

			ll k=0;
			if(r%2==1)
				k++;
			if(g%2==1)
				k++;
			if(b%2==1)
				k++;
			if(w%2==1)
				k++;

			if(k<=1)
				ans="Yes";
			else
			{
				ll k=0,q=0;
				if(r%2==1)
					k++;
				if(g%2==1)
					k++;
				if(b%2==1)
					k++;
				if(w%2==1)
					q++;

				if(k==3)
				{
					ans="Yes";
				}
				else if(k==2)
				{
					if(q==1)
						ans="Yes";
					else
						ans="No";
				}
				else if(k==1)
				{
					ans="No";
				}

			}
			


		}
		cout<<ans<<endl;



	}	
	return 0;
}