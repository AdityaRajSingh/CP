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



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t;
	double a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		double s=(a+b+c+d)/2;
		double p=(s-a)*(s-b)*(s-c)*(s-d);
		double ans=sqrt(p);
		printf("%.2lf\n",ans);
	}	






	
	return 0;
}