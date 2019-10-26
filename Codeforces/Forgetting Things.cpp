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
int a,b;
cin>>a>>b;

if(a==9 && b==1)
{
	cout<<a<<"9 "<<b<<"00";
	return 0;
}
else
{
if(a==b)
{
	cout<<a<<"2 "<<a<<"3";
	return 0;
}

else
{
	if(b-a==1)
	{
		cout<<a<<"9 "<<b<<"0";
		return 0;
	}
}
}


cout<<"-1";

return 0;

////////////////////////////////////////////////////////////////////////////////////////////


	
	
}