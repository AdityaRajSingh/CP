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
	
	ll m,n,k;
	cin>>m>>n>>k;
	ll a[m][n];
	rep(i,0,m)
	{
		rep(j,0,n)
		{
			cin>>a[i][j];
		}
	}	

	vector<ll> d1;
	vector<ll> d2;
	ll q=min(m,n);
	rep(i,0,m)
	{
		rep(j,0,n)
		{
			if(a[i][j]==1)
			{

				ll i1=i,j1=j;
				ll i2=i,j2=j;
				a[i1][j1]++;
				i1++;j1++;
				while(i1<m && j1<n)
				{
					if(a[i1][j1]>0)
					{
						ans++;
						a[i1][j1]++;
					}
					i1++;j1++;
				}


				i1--;j1--;
				while(i2>=0 && j2>=0)
				{
					if(a[i2][j2]>0)
					{
						ans++;
					}
				}
			}

				
			
			
		}
	}	


	ll ans=0;
	ll mp[2005][2005];
	memset(mp, 0, sizeof(mp));

	rep(i,0,d1.size()-1)
	{
		rep(j,i+1,d1.size())
		{
			if( d1[j]-d1[i]<=k)
			{
				if(mp[i][i]==0 && mp[j][j]==0)
				{
					ans=ans+2;
					mp[i][i]=1;
					mp[j][j]=1;
				}
				// if(mp[i][i]==0 && mp[j][j]!=0)
				// {
				// 	ans=ans+1;
				// 	mp[i][i]=1;
				// }
				// if(mp[j][j]==0 && mp[i][i]!=0)
				// {
				// 	ans=ans+1;
				// 	mp[j][j]=1;
				// }
				
				
			}
		}
	}
	// rep(i,0,d2.size()-1)
	// {
	// 	rep(j,i+1,d2.size())
	// 	{
	// 		if( d2[j]-d2[i]<=k)
	// 		{
	// 			if(mp[i][q-1-i]==0 && mp[j][q-j-1]==0)
	// 			{
	// 				ans=ans+2;
	// 				mp[i][q-1-i]=1;
	// 				mp[j][q-j-1]=1;
	// 			}
	// 			if(mp[i][q-1-i]==0 && mp[j][q-j-1]!=0)
	// 			{
	// 				ans=ans+1;
	// 				mp[i][q-1-i]=1;
	// 			}
	// 			if(mp[j][q-j-1]==0 && mp[i][q-1-i]!=0)
	// 			{
	// 				ans=ans+1;
	// 				mp[j][q-j-1]=1;
	// 			}
				
				
	// 		}
	// 	}
	// }
cout<<ans;


	
	return 0;
}