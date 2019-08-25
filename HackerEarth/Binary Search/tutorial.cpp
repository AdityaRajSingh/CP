#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

int a[1000000];


int bs(int l, int r, int k)
{
	if(r>=l)
	{
		int mid=(l+r)/2;
		//cout<<mid<<endl;
		if(a[mid]==k)
		{
			return mid;
		}
		if(a[mid]>k)
		{
			//cout<<a[mid]<<" a[mid]>k "<<k<<endl;
			return bs(l,mid-1,k);
		}
		//cout<<a[mid]<<" a[mid]<k "<<k<<endl;
			return bs(mid+1,r,k);
	}
	return -1;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	
	int t,n,q,s,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	sort(a,a+t);


		cin>>q;
		while(q--)
		{
			cin>>s;
			cout<<bs(0,t, s)+1<<endl;
		}
//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}