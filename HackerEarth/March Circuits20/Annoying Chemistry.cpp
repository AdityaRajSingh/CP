#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair


int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	int x,y,p,q;
	cin>>x>>y>>p>>q;
	int k1=0,k2=0;
	int b1,b2,b3;
	if(p%x==0)
	{
		k1=1;
	}
	if(q%y==0)
	{
		k2=1;
	}
	if(k1==1 && k2==1)
	{
		b1=p/x;
		b2=q/y;
		b3=1;
	}
	if(k1==1 && k2!=1)
	{
		b1=(p/x)*y;
		b2=q;
		b3=y;
	}
	if(k1!=1 && k2==1)
	{
		b1=p;
		b2=(q/y)*x;
		b3=x;
	}
	if(k1!=1 && k2!=1)
	{
		b1=p*y;
		b2=q*x;
		b3=x*y;
	}
	int q1=gcd(b1,b2);
	q1=gcd(q1,b3);
	


cout<<b1/q1<<" "<<b2/q1<<" "<<b3/q1;
	
	return 0;
}