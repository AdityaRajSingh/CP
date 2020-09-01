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
//ll M=1e+9;
unordered_map<string,int>dp;
int recurse(int d,int t,int n,int oldd,int oldt,string s)
{

    if(d<=0)
      return 0;
    if(t<=0)
      return 0;
    //cout<<s<<"\n";
     if(n==0&&d>0&&t>0)
      return 1;
    string h=to_string(d)+" "+to_string(t)+" "+to_string(n);

    if(dp.find(h)!=dp.end())
     return dp[h];
    int ans=0;
    ans+=recurse(d-1,oldt,n-1,oldd,oldt,s+'0')+recurse(oldd,t-1,n-1,oldd,oldt,s+'1');
    return dp[h]=ans;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	int n,d,t;
    cin>>n>>d>>t;
    dp.clear();
    cout<<recurse(d,t,n,d,t,"")<<"\n";
	return 0;
}