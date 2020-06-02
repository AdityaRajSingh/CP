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


ll lcmf(ll a,ll b)
{
	return (a*b)/__gcd(a,b);
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,a,b,q; 
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>q;
		ll lcm=lcmf(a,b);
		ll m=max(a,b);
		rep(i,0,q)
		{
			ll l,r;
			cin>>l>>r;






	ll ans=0;


	ll q1;
	if(l%lcm==0)
	{
		q1=l/lcm;
	}
	else
	{
		
		ll w=l/lcm;
		w=(w+1)*lcm;
		rep(i,l,w)
		{
			if((i%a)%b == (i%b)%a)
			{
				ans++;
			}
		}
		q1=(l/lcm)+1;
	}
	ll q2;
	if(r%lcm==0)
	{
		q2=r/lcm;
	}
	else
	{
		ll w=r/lcm;
		w=w*lcm;
		rep1(i,w,r)
		{
			if((i%a)%b == (i%b)%a)
			{
				//cout<<i<<endl;
				ans++;
			}
		}
		q2=r/lcm;
		
	}

	//cout<<q1<<" "<<q2<<endl;
	ll d=q2-q1;



	ans+=d*m;
	cout<<r-l+1-ans<<" ";


		}
		cout<<endl;

		

	}

	
	return 0;
}