#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)
ll a[5000000];
ll n,s=0;


ll sum(ll r)
{
/*	    ll dsum=0;
		rep(i,0,n)
		{
			 dsum+=a[i]/r;
		}
		return dsum;*/
	return (s/r);
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
		ll r=s/k;//sum/10=9
		ll dsum=sum(r);//sum/9
		while(dsum<k)
		{
			r--;
			dsum=sum(r);
		}
		printf("%lld",r);
	}


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}