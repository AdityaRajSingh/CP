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

string s;
string r;
int l1;
int dp[7000][7000];
ll lcs(int i,int j)
{
	if(i==l1 || j==l1)
		return 0;

	if(dp[i][j]!=-1)
		return dp[i][j];
	if(s[i]==r[j])
		return dp[i][j]= 1+lcs(i+1,j+1);

	return dp[i][j]=max(lcs(i+1,j),lcs(i,j+1));
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		r=s;
		l1=s.length();
		reverse(r.begin(), r.end());
		memset(dp,-1,sizeof(dp));
		int k=lcs(0,0);
		cout<<l1-k<<endl;

	}	
	return 0;
}