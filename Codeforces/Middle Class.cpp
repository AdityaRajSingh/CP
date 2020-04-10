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
	
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a[n],d,s=0;
		
		vll vn;
		ll ans=0;

		rep(i,0,n)
		{
			cin>>a[i];
			d=a[i]-m;
			//cout<<d<<endl;
			if(d>=0)
			{
				s+=d;
				ans++;
			}
			else
			{

				vn.pb(d);
			}
		}
		// rep(i,0,vn.size())
		// cout<<vn[i]<<endl;
		//cout<<endl;
		sort(vn.begin(),vn.end(),greater <ll>());


			rep(i,0,vn.size())
			{
				
				if(vn[i]+s>=0)
				{
					ans++;
					s+=vn[i];
				}
				if(s==0)
				{
					break;
				}
			}

cout<<ans<<endl;


	}	






	
	return 0;
}