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


ll a[105];
ll d[105];

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
rep(i,1,n+1)
cin>>a[i];

a[0]=a[n];
a[n+1]=a[1];

rep(i,1,n+1)
cin>>d[i];

ll max=0;ll q=0;
rep(i,1,n+1)
{
	if((a[i-1]+a[i+1])<d[i])
	{
		q=1;
		if(d[i]>max)
			{
				max=d[i];
			}
	}
}
if(q==0)
{
	cout<<-1<<endl;
}
else{
	cout<<max<<endl;
}


}



////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}