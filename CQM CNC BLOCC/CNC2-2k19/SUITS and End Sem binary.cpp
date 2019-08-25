#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)
ll a[5000000];
ll n,s=0;


ll f(ll num)
{
	ll sum=0;
rep(i,0,n)
{
	sum+=(a[i]/num);
}
return sum;
}


ll bs(ll s, ll e, ll k)
{
	if(e>=s)
	{
	ll mid=(s+e)/2;
	if(f(mid)==k)
	{
		return mid;
	}
	else if(f(mid)>k)
	{
		s=mid+1;
		bs(s,e,k);
	}
	else
	{
		e=mid-1;
		bs(s,e,k);
	}
}
}




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	
//////////////////////////////////////////////////////////////////////
	
	ll k,q;
scanf("%lld",&n);
scanf("%lld",&k);

rep(i,0,n)
{
	scanf("%lld",&q);
	a[i]=q;
	s=s+q;
}
if(s<k)
	printf("-1");
else
	{
		ll r=s/k;
		cout<<(bs(1,r,k));
	}


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}