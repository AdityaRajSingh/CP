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

ll gcd(ll a, ll b)
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
	
	ll a,b,c,lcm1,lcm2;
	cin>>a>>b>>c;
	lcm1=(a*b)/gcd(a,b);
	lcm2=(lcm1*c)/gcd(lcm1,c);
	cout<<lcm2;






	
	return 0;
}