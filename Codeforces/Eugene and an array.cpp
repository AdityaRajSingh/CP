#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
	
	ll n;
	cin>>n;
	ll a[n],s[n];
	map<ll,ll>mp;
	rep(i,0,n)
	{
		cin>>a[i];
	}	
	s[0]=a[0];
	mp[s[0]]++;
	mp[0]++;
	rep(i,0,n)
	{
		s[i]=a[i]+s[i-1];
		mp[s[i]]++;

	}	
	ll diff=0;
	for(auto it:mp)
	{
		if(it.second>1)
		{
			ll q=it.second;
			q--;
			diff+=(q*q+1)/2;
		}
	}
	ll ans=(n*n+1)/2;
	ans-=diff;
	cout<<ans;







	
	return 0;
}