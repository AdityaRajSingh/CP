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
		ll a[n],b[n];
		rep(i,0,n)
		{
			cin>>a[i];
		}
		rep(i,0,n)
		{
			cin>>b[i];
		}

		map<int,int> mp;
		mp[0]=0;
		mp[-1]=0;
		mp[1]=0;


		if(a[0]!=b[0])
		{
			cout<<"NO"<<endl;
		}
		else
		{
			int k=0;
			mp[a[0]]++;
			rep(i,1,n)
			{

				if(a[i]==b[i])
				{
					mp[a[i]]++;
				}
				else
				{
					if(a[i]<b[i] && mp[1]==0)
					{

						k=1;
					}
					if(a[i]>b[i] && mp[-1]==0)
					{
						//cout<<"H"<<i<<endl;
						k=1;
					}
					mp[a[i]]++;
				}
				if(k==1)
				{
					cout<<"NO"<<endl;
					break;
				}
			}
			if(k==0)
			{
				cout<<"YES"<<endl;
			}
		}
		
	}	






	
	return 0;
}