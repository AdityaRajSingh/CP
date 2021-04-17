														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 

int fun(string s)
{
	int len=s.length();
	int l=0,r=0,u=0,d=0,ans=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='L')
			l++;
		if(s[i]=='R')
			r++;
		if(s[i]=='U')
			u++;
		if(s[i]=='D')
			d++;
	}

	if(l>r)
	{
		ans+=2*r;
	}
	else
	{
		ans+=2*l;
	}

	if(u>d)
	{
		ans+=2*d;
	}
	else
	{
		ans+=2*u;
	}

	return r;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	string s;
	cin>>s;
	cout<<s<<endl;
	cout<<fun(s);


	
	return 0;
}