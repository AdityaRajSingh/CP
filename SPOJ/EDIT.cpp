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




int check(char a)
{
	if(a>='A' && a<='Z')
		return 1;
	return 0;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	

	string a;
	while(cin>>a)
	{
				
		int l;
		l=a.length();
		int sm=0;
		int bg=0;
		int d[l],d1[l];
		for(int i=0;i<l;i++)
		{
			d[i]=check(a[i]);	
			d1[i]=d[i];	
		}
		int ans1=0;
		for(int i=1;i<l;i++)
		{
			if(d[i]==d[i-1])
			{
				d[i]=abs(d[i]-1);
				ans1++;
			}
		}
		int ans2=0;
		for(int i=1;i<l;i++)
		{
			if(d1[i]==d1[i-1])
			{
				d1[i-1]=abs(d1[i-1]-1);
				ans2++;
			}
		}
		int diff=min(ans1,ans2);
		cout<<diff<<endl;

	}	
	
	return 0;
}