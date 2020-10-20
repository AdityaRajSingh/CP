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
		ll a[n];
		unordered_map<ll,ll> mp;
		rep(i,0,n)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		string ans="NO";

		ll min=INT_MAX,minc=-1;
		ll max=INT_MIN,maxc=-1;

		if(mp.size()>1)
		{
			for(auto it: mp)
			{
				if(it.second<min)
				{
					min=it.second;
					minc=it.first;
				}
				if(it.second>=max)
				{
					max=it.second;
					maxc=it.first;
				}
			}
			ll pivot=-1,pivot2=-1;
			rep(i,0,n)
			{
				if(a[i]==minc)
				{
					pivot=i+1;
					break;
				}
			}
			rep(i,0,n)
			{
				if(a[i]==maxc)
				{
					pivot2=i+1;
					break;
				}
			}
			cout<<"YES"<<endl;
			rep(i,0,n)
			{
				if(a[i]!=minc)
				{
					cout<<i+1<<" "<<pivot<<endl;
				}
			}
			rep(i,0,n)
			{
				if(a[i]==minc && i!=pivot-1)
				{
					cout<<i+1<<" "<<pivot2<<endl;
				}
			}
		}
		else
		{
			cout<<ans<<endl;
		}





	}	
	return 0;
}