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

int a[1000000];
int seg[5000000];

void build(int node, int start, int end)
{
	if(start==end)
	{
		seg[node]=a[start];
	}
	else
	{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);

		seg[node]=min(seg[2*node],seg[2*node+1]);
	}
}

void update(int node, int start, int end,int i, int val)
{
	if(start==end)
	{
		a[i]=val;
		seg[node]=a[i];
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=i && i<=mid)
		{
			update(2*node,start,mid,i,val);
		}
		else
		{
			update(2*node+1,mid+1,end,i,val);
		}
		seg[node]=min(seg[2*node],seg[2*node+1]);
	}
}

int query(int node , int start, int end,  int l , int r)
{
	if(r<start || end<l)
	{
		return INT_MAX;
	}
	if(l<= start && end<=r)
	{
		return seg[node];
	}
	int mid=(start+end)/2;
	int p1=query(2*node,start,mid,l,r);
	int p2=query(2*node+1,mid+1,end,l,r);
	return min(p1,p2);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	int i;
	int n,q;
	char c;
	int l,r;
	cin>>n>>q;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	build(1,1,n);
/*	for(i=1;i<15;i++)
	{
		cout<<i<<" "<<seg[i]<<endl;
	}*/
	for(i=1;i<=q;i++)
	{
		cin>>c>>l>>r;
		if(c=='q')
		{
			cout<<query(1,1,n,l,r)<<endl;
		}
		if(c=='u')
		{
			update(1,1,n,l,r);
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}