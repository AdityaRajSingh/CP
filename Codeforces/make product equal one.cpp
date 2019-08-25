/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
ll N,ans=0;
cin>>N;
ll a[N];
ll n=0,p=0,z=0;
rep(i,0,N)
{
	cin>>a[i];
	if(a[i]<0)
	{	
		n++;
		if(a[i]<-1)
			ans+=abs(a[i]+1);
	}

	if(a[i]>0)
	{
		p++;
		if(a[i]>1)
		ans+=a[i]-1;
	}
	if(a[i]==0)
		z++;	
}	
if(n%2!=0)
{
	if(z>0)
	{
		ans++;
		z--;
	}
	else
	{
		ans+=2;
	}
}
if(z>0)
{
	ans+=z;
}

cout<<ans;




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}