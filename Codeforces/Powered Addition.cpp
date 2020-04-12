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
	
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],smax[n],diff[n];
		rep(i,0,n)
		{
			cin>>a[i];
		}
		smax[0]=a[0];
		diff[0]=0;
		rep(i,1,n)
		{
			smax[i]=max(smax[i-1],a[i]);
			
			diff[i]=smax[i]-a[i];
			//cout<<diff[i]<<" ";
		}
		//cout<<endl;

		ll m=INT_MIN;
		rep(i,0,n)
		{
			m=max(m,diff[i]);
		}
		ll ans=0;
		//ll s=0;
		// if(m!=0)
		// {
		// 	rep(i,0,10000000)
		// 	{
		// 		s+=pow(2,i);
				
		// 		if(s>=m)
		// 		{
		// 			ans=i+1;
		// 			break;
		// 		}
		// 	}
		// }
		if(m!=0)
		{
			ans=log2(m+1);
			ld q=log2(m+1);

			if((ld)ans==q)
			{
				ans+=0;
			}
			else
			{
				ans++;
			}

		}
		
		cout<<ans<<endl;

	}	






	
	return 0;
}