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
#define rep(i,a,b) for(int i=a;i<b;i++)
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

cin>>n;
int a[n];
rep(i,0,n)
cin>>a[i];

cin>>m;
int b[m];
rep(i,0,m)
cin>>b[i];
int f=0,s=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		int sum=a[i]+b[j];
		rep(itr,0,n)
		{
			if(a[itr]==sum)
			{
			  f=1;
			  break;
			}
		}
		rep(itr,0,m)
		{
			if(b[itr]==sum )
			{
			  s=1;
			  break;
			}
		}
		if(f==0 && s==0)
		{
			cout<<a[i]<<" "<<b[j];
			return 0;
		}
		else
		{
			f=0;
			s=0;
		}
	}
}





////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}