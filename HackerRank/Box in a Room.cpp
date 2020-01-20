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
	
	ll t,a,b,c,l,b1,h;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cin>>l>>b1>>h;

		ll m1,m2,m3;
		ll n1,n2,n3;

		m1=min(min(a,b),c);
		m3=max(max(a,b),c);
		if(m1==a && m3==b || m1==b && m3==a)
		m2=c;
		if(m1==a && m3==c || m1==c && m3==a)
		m2=b;
		if(m1==b && m3==c || m1==c && m3==b)
		m2=a;

		n1=min(min(l,b1),h);
		n3=max(max(l,b1),h);
		if(n1==l && n3==b1 || n1==b1 && n3==l)
		n2=h;
		if(n1==l && n3==h || n1==h && n3==l)
		n2=b1;
		if(n1==b1 && n3==h || n1==h && n3==b1)
		n2=l;

	cout<<m1<<m2<<m3<<endl;
	cout<<n1<<n2<<n3<<endl;

		if(a<=l && b<=b1 && c<=h)
		{
			

			if(c<=l)
				cout<<"24"<<endl;
			else if(c<=b1)
				cout<<"16"<<endl;
			else if(c<=h)
				cout<<"4"<<endl;

		}
		else
		{
			cout<<0<<endl;
		}
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}