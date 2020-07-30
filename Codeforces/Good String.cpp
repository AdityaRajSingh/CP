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
	
	ll t; 
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll l=s.length();
		map<char,ll> mp;
		rep(i,0,l)
		{
			mp[s[i]]++;
		}


		ll mf1=0;
		char mc1;

		for(auto it:mp)
		{
			if(it.second>mf1)
			{
				mf1=it.second;
				mc1=it.first;
			}
		}

		ll mf2=0;
		char mc2;
		for(auto it:mp)
		{
			if(it.second>mf2 && it.first!=mc1)
			{
				mf2=it.second;
				mc2=it.first;
			}
		}



		ll k1=0;
		rep(i,0,l)
		{
			if(s[i]==mc1)
				k1++;
		}
		
		string d="";
		rep(i,0,l)
		{
			if(s[i]==mc1 || s[i]==mc2)
			{
				d+=s[i];
			}
		}

		ll ld=d.length();

		ll i=1;
		char q1=d[i],q2;
		if(q1==mc1)
			q2=mc2;
		else
			q2=mc1;


		ll k2=0;
		while(i<ld)
		{
			if(d[i]==q1 && d[i-1]==q2)
			{
				k2+=2;
			}
			i+=2;

		}
		i=1;
		ll k3=0;
		while(i<ld)
		{
			if(d[i]==q2 && d[i-1]==q1)
			{
				k3+=2;
			}
			i+=2;

		}

		//cout<<k1<<" "<<k2<<" "<<k3<<endl;
		k1=l-k1;
		k2=l-k2;
		k3=l-k3;

		ll ans=min(k1,min(k2,k3));
		cout<<ans<<endl;





	}	
	return 0;
}