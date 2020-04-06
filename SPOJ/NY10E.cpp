#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair
#define N 65


ll a[65];
ll b[65];
ll dp[N][N];

ll noOfNonDecreasingDigits(ll l,ll i,ll n)
{
	if(i>n)
		return 0; 

	ll s=0;

	if(dp[l][i]!=-1)
		return dp[l][i];

	for(int k=l;k<10;k++)
	{
		s+= 1+noOfNonDecreasingDigits(k,i+1,n);
	}

	return dp[l][i]=s;
}


void fillTable()
{
	for(int i=1;i<65;i++)
	{
		memset(dp,-1,sizeof(dp));
		a[i]=noOfNonDecreasingDigits(0,1,i);
		b[i]=a[i]-a[i-1];
		//cout<<a[i]-a[i-1]<<endl;
	}
}





int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,m;
	cin>>t;

	fillTable();
	

	while(t--)
	{
		ll n;
		cin>>m>>n;
		
		cout<<m<<" "<<b[n]<<endl;
	}	
	return 0;
}