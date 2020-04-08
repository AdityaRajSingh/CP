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


int l1,l2;
string a,b;
ll dp[105][105];


ll lcs(ll i, ll j)
{
	if(i==l1 || j==l2)
		return 0;

    if(dp[i][j]!=-1)
    return dp[i][j];
    
	if(a[i]==b[i])
		return dp[i][j]=1+lcs(i+1,j+1);

	return dp[i][j]= max(lcs(i+1,j),lcs(i,j+1));
}


int main() {
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	ll t,x,n;
	cin>>t;
	while(t--)
	{
		cin>>l1>>l2;
		cin>>a>>b;
		memset(dp,-1,sizeof(dp));
		cout<<lcs(0,0)<<endl;
		
	}
	return 0;
}
