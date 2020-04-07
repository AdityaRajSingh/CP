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

string a,b;
int dp[2001][2001];


int noOfOpearation(int l1,int l2)
{
	if(l1==0)
		return l2;

	if( l2==0)
		return l1;

	if(dp[l1-1][l2-1]!=-1)
		return dp[l1-1][l2-1];

	if(a[l1-1]==b[l2-1])
	{
		return dp[l1-1][l2-1]=noOfOpearation(l1-1,l2-1);
	}
	return dp[l1-1][l2-1]=1+min(min(noOfOpearation(l1-1,l2),noOfOpearation(l1,l2-1)),noOfOpearation(l1-1,l2-1));

}
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
		
		cin>>a>>b;
		int l1,l2;
		l1=a.length();
		l2=b.length();
		memset(dp,-1,sizeof(dp));
		cout<<noOfOpearation(l1,l2)<<endl;

	}	
	
	return 0;
}