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
	
	ll t,n;
rep(t,1,1005)
{


	ll i=1;
	ll a[11]={0};
	while(i<=1000)
	{
		ll n=t*i;
		while(n>0)
		{
			a[n%10]++;
			n=n/10;
		}
		i++;
	}
	ll k=0;
	rep(i,0,10)
	{
		if(a[i]!=0)
		{
			k++;
		}

	}	
	if(k==10)
	{
		continue;
	}
	else
	{
		cout<<"no "<<t<<endl;
		rep(i,0,10)
		{
			if(a[i]==0)
			{
				cout<<i<<" ";
			}

		}
		cout<<endl;

	}

}





////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}