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
ll lcm(ll a, ll b)
{
	return (a*b)/gcd(a,b);
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		// ll f[m+1]={0};
		ll a[n];

		rep(i,0,n)
		{
			cin>>a[i];
			//f[a[i]]++;
		}
		ll l=a[0];
		rep(i,1,n)
		{
			l=lcm(l,a[i]);
		}
		ll lmax=l;
		ll pos=1;
		rep(i,1,m+1)
		{
			if(lcm(l,i)>lmax)
			{
				lmax=lcm(l,i);
				pos=i;
			}
		}

		cout<<pos<<endl;



		// int k=0;
		// for(ll j=m;j>=1;j--)
		// {
		// 	if(f[j]==0)
		// 	{
		// 		cout<<j<<endl;
		// 		k=1;
		// 		break;
		// 	}
		// }
		// if(k==0)
		// 	cout<<1<<endl;
		


	}	






	
	return 0;
}