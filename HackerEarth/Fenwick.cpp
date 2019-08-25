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

int bit[1000],a[1000],n;

void update(int x, int val)
{
	while(x<=n)
	{
		bit[x]+=val;
		x+=x&(-x);
	}
}

int query(int x)
{
	int sum=0;
	while(x>0)
	{
		sum+=bit[x];
		x-=x&(-x);
	}
	return sum;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
int q;
cin>>n;
int i,l;
for(i=1;i<=n;i++)
{
	cin>>a[i];
	update(i,a[i]);
}
cin>>q;
for(i=1;i<=n;i++)
{
	cin>>l;
	cout<<query(l)<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}