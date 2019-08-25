/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int n,m;
	cin>>n>>m;
	//cout<<m<<endl;
	int ans=0;
	vector< int > p;
	
 vector<string>  a;
	rep(i,0,n)
	{
		string s;
		cin>>s;
		//cout<<s<<endl;
		a.pb(s);
	}	
	rep(i,0,m)
	{
		int x;
		cin>>x;
		p.pb(x);
	}
	for(int i=0;i<m;i++)
	{
		vector< int > c(5,0);
		for(int j=0;j<n;j++)
		{
			c[a[j][i]-'A']++;
		}
		int max=0;
		for(int j=0;j<5;j++)
		{
			if(c[j]>max)
				max=c[j];
		}
		ans+=max*p[i];
	}
	cout<<ans;




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}