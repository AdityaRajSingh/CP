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
#define N 100005


vll a(100005,0);
vll s(100005,0);
void initialize()
{
	rep(i,0,N)
	{
		a[i]=i;
		s[i]=0;
	}
}
ll root(ll i)
{
	while(a[i]!=i)
	{
		a[i]=a[a[i]];
		i=a[i];
	}
	return i;
}
void dsu(ll x, ll y)
{
	ll rx=root(x);
	ll ry=root(y);
	//cout<<"root of "<<x<<"="<<rx<<endl;
	//cout<<"root of "<<y<<"="<<ry<<endl;	
	if(rx!=ry)
	{
		if(s[rx]>=s[ry])
		{
			a[ry]=a[rx];
			ll t=s[rx];
			s[rx]+=s[ry];
			// s[ry]+=t;
		}
		else
		{
			a[rx]=a[ry];
			ll t=s[ry];
			s[ry]+=s[rx];
			// s[rx]+=t;
		}
	}
		
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n;

	cin>>t;
	string a,b;

	while(t--)
	{
		cin>>n;
		a.resize(N);
		s.resize(N,0);
		initialize();

		ll k=0;
		map<string,ll> mp;
		rep(i,0,n)
		{
			ll x,y;
			cin>>a>>b;
			if(mp.find(a) == mp.end())
			{
				mp[a]=k;
				x=k;
				s[k]=1;
				k++;

			}
			else
			{
				x=mp[a];
			}
			if(mp.find(b) == mp.end())
			{
				mp[b]=k;
				y=k;
				s[k]=1;
				k++;
			}
			else
			{
				y=mp[b];
			}
			// cout<<x<<" "<<y<<endl;
			dsu(x,y);
			// rep(i,0,3)
			// {
			// 	cout<<s[i]<<" ";
			// }
			//cout<<endl;

			ll rx=root(x);
			ll ry=root(y);

			//cout<<rx<<" "<<ry<<endl;
			if(s[rx]>=s[ry])
			{
				cout<<s[rx]<<endl;
			}
			else
			{
				cout<<s[ry]<<endl;
			}
		}
		// for(auto it:mp)
		// {
		// 	cout<<it.first<<" "<<it.second<<endl;
		// }

	}	


	return 0;
}