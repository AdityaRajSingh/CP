#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; cin>>t;
	while(t--)
	{
		cin>>n;ll a[n];
		rep(i,0,n)
			cin>>a[i];
		ll i=0;ll j=n-1;
		ll m=0;
		ll prev=0;
		ll sa=0;
		ll sb=0;
		while(i<=j)
		{
			m++;
			if(m%2==1)
			{
				ll s=0;
				while(s<=prev && i<=j)
				{
					s+=a[i];
					sa+=a[i];
					i++;
				}
				prev=s;
			}
			else
			{
				ll s=0;
				while(s<=prev && i<=j)
				{
					s+=a[j];
					sb+=a[j];
					j--;
				}
				prev=s;
			}
		}
		cout<<m<<" "<<sa<<" "<<sb<<endl;




	}	
	return 0;
}