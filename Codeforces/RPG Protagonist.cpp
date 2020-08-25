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


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t; 
	cin>>t;
	while(t--)
	{
		//cout<<"chance "<<t+1<<endl;
		ll w1,w2;
		cin>>w1>>w2;
		//cout<<w1<<" "<<w2<<endl;

		ll c1, c2;
		cin>>c1>>c2;

		ll s1,s2;
		cin>>s1>>s2;

		ll minw,maxw;
		if(w1<=w2)
		{
			minw=w1;
			maxw=w2;
		}
		else
		{
			minw=w2;
			maxw=w1;
		}

		//cout<<"minw,maxw="<<minw<<" "<<maxw<<endl;

		ll mins,minc,maxs,maxc;
		if(s1<=s2)
		{
			mins=s1;
			minc=c1;
			maxs=s2;
			maxc=c2;
		}
		else
		{
			mins=s2;
			minc=c2;
			maxs=s1;
			maxc=c1;
		}
		// cout<<"mins="<<mins<<endl;

		ll copy=minc;
		ll ans=0;


		ll t1=minc*mins;
		if(t1<=minw)
		{
			minw-=t1;
			ans+=minc;
			minc-=minc;
		}
		else
		{
			ll dummy=minw/mins;
			//cout<<"dummy="<<dummy<<endl;
			minw-=(dummy)*mins;
			ans+=dummy;
			minc-=dummy;
		}


		// cout<<ans<<endl;



		t1=minc*mins;
		if(t1<=maxw)
		{
			maxw-=t1;
			ans+=minc;
			minc-=minc;
		}
		else
		{
			ll dummy=maxw/mins;
			maxw-=(dummy)*mins;
			ans+=dummy;
			minc-=dummy;
		}



		// cout<<ans<<endl;



		ll t2=maxc*maxs;
		if(t2<=minw)
		{
			minw-=t1;
			ans+=maxc;
			maxc-=maxc;
		}
		else
		{
			ll dummy=minw/maxs;
			minw-=(dummy)*maxs;
			ans+=dummy;
			maxc-=dummy;
		}



		// cout<<ans<<endl;
		

		t2=maxc*maxs;
		if(t2<=maxw)
		{
			maxw-=t1;
			ans+=maxc;
			maxc-=maxc;
		}
		else
		{
			ll dummy=maxw/maxs;
			maxw-=(dummy)*maxs;
			ans+=dummy;
			maxc-=dummy;
		}

		// cout<<ans<<endl;
		if(maxc>0)
		{
			if(minw+maxw>=maxs)
			{
				//cout<<"copy="<<copy<<endl;
				if(copy>0)
					ans++;
			}
			
		}

		cout<<ans<<endl;










	}	
	return 0;
}