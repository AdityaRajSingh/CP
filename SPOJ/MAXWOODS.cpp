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
#define N 1000
ll t,m,n;
char a[N][N];

int dp[N][N];


ll maxWoods(ll i,ll j,int d)
{
	//cout<<a[i][j]<<endl;

	if(i<0 || j<0 || i>m-1 || j>n-1)
	{
		//cout<<"1"<<endl;
		return 0;
	}

	if(a[i][j]=='#')
	{
		//cout<<"2"<<endl;
		return 0;
	}

	if(dp[i][j]!=-1)
		return dp[i][j];

	if(a[i][j]=='T' && d==1)
	{
		//cout<<"3"<<endl;
		return dp[i][j]= 1+max(maxWoods(i,j+1,d),maxWoods(i+1,j,0));
	}

	if(a[i][j]=='T' && d==0)
	{
		//cout<<"4"<<endl;
		return dp[i][j]=1+max(maxWoods(i,j-1,d),maxWoods(i+1,j,1));
	}

	if(a[i][j]=='0' && d==1)
	{
		//cout<<"5"<<endl;
		return dp[i][j]=max(maxWoods(i,j+1,d),maxWoods(i+1,j,0));
	}

	if(a[i][j]=='0' && d==0)
	{
		//cout<<"6"<<endl;
		return dp[i][j]=max(maxWoods(i,j-1,d),maxWoods(i+1,j,1));
	}

}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		
		rep(i,0,m)
		{
			rep(j,0,n)
				cin>>a[i][j];
		}
		// rep(i,0,m)
		// {
		// 	rep(j,0,n)
		// 		cout<<a[i][j];
		// 		cout<<endl;
		// }
		memset(dp,-1,sizeof(dp));
		cout<<maxWoods(0,0,1)<<endl;
	}	
	return 0;
}