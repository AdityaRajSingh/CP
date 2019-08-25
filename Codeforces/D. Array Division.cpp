#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	
	ll n,s=0;
	cin>>n;
vector<ll> a(5*n,0);

rep(i,0,n)
	cin>>a[i],s=s+a[i];
if(s&1)
{
	cout<<"NO";
	return 0;
}

map<ll, ll> first;
map<ll, ll> second; 

first[a[0]]=1;

rep(i,1,n)
second[a[i]]++;

ll sdash=0;
rep(i,0,n)
{
	sdash+=a[i];

	if(sdash==s/2)
	{
		cout<<"YES";
		return 0;
	}

	if(sdash>s/2)
	{
		//first bada hai
		ll x=sdash-s/2;
		if(first[x]>0)
		{
			cout<<"YES";
		return 0;
		}
	}
	if(sdash<s/2)
	{
		ll y=s/2-sdash;
		if(second[y]>0)
		{
			cout<<"YES";
		return 0;
		}
	}
	first[a[i+1]]++;
	second[a[i+1]]--;
}
cout<<"NO";


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}