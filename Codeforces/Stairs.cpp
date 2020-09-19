														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
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
	
	ll t,x; 
	cin>>t;
	
	ll s=1e18;
	
	ll ls=1;

	ll curr=3;
	ll count =2;

	map<ll,ll> mp;
	mp[ls]=1;

	
	
	while(ls<s)
	{
			

		ls+=(curr*(curr+1))/2;
		mp[ls]=count;

		curr+=(curr+1);
		count++;
	}
	
	while(t--)
	{
		cin>>x;
		//cout<<x<<endl;
		auto it=mp.lower_bound(x);
		if((*it).first==x)
		{
			cout<<(*it).second<<endl;
		}
		else
		{
			
			it--;
			cout<<(*it).second<<endl;
		}


	}	
	return 0;
}