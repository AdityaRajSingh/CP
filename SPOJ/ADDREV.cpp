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


ll rev(ll x)
{
	int k=0,b=0;
	ll x1=x,ans=0,n;
	ll z=x;
	while(x1>0)
	{
		x1=x1/10;
		k++;
	}





	if(x%10==0)
	{
		while(x%10==0 && x>0)
	{ 
		b++;
		x=x/10;
	}

	}

	k=k-b;


while(x>0)
	{
		n=x%10;
		ans=ans+(pow(10,k-1)*n);
		k--;
		x=x/10;
	}
return ans;
}

int main()
{

	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t;
	ll a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		a=rev(a);
		b=rev(b);
		ll sum=rev(a+b);
		cout<<sum<<endl;

	}	







////////////////////////////////////////////////////////////////////////////////////////////

	
	return 0;
}