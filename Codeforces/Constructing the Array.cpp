#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


ll a[200009];
void fillArray(ll l, ll r, ll k)
{
	ll mid=l+(r-l)/2;
	a[mid]=k;
	k++;
	if(k%2==0)
	{

	}
	else
	{
		
	}
	fillArray(l,mid-1);
	fillArray(mid+1,r);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; cin>>t;
	while(t--)
	{
		cin>>n;
		fillArray(1,n,1);
	}	
	return 0;
}