/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;
typedef std::vector<std::string> vc;

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
	
	ll t,n,j;
	cin>>t;
	int i;
	while(t--)
	{
	cin>>n;
	string str="";
	int a[26]={0};
	rep(j,0,n)
	{
		
		cin>>str;
		
		char c;
		for( c='a'; c<='z'; c++)
		{
		
			for(i=0;i<str.length();i++)
			{	
				

				if(str[i]==c)
				{
					a[c-'a']++;
					break;
				}
		}

		}
	}
	int ck=0;
	for(i=0;i<26;i++)
	{
		if(a[i]>=n)
			ck++;
	
	}
	cout<<ck<<endl;

}
cout<<endl;


////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}