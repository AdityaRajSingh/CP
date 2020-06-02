#include<bits/stdc++.h>
using namespace std;

typedef int  ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	ll n;
	cin>>n;
	ll a[n];
	rep(i,0,n)
	{
		cin>>a[i];
	}	
	sort(a,a+n);

	ll last=0;
	ll current=1;

	while(a[current]<=a[n-1])
	{
		if(a[current]!=a[last])
		{
			a[++last]=a[current];
		}
			current++;

	}
	a[++last]='\0';
	cout<<last<<endl;


	
 
	ll l=sizeof(a);
	rep(i,0,last)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}