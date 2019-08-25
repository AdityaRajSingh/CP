#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

int a[100000];
int s[100000];

int bs(int l, int r, int k)
{
	int d=INT_MAX;
	int p;
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
			if(a[mid]-k>d)
			{
				d=a[mid]-k;
				p=mid;
			}
			return bs(l,mid-1,k);
		}
		//cout<<a[mid]<<" a[mid]<k "<<k<<endl;
			return bs(mid+1,r,k);

	}
	return p;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	
	ll n,qs,q;
	cin>>n;
	rep(i,0,n)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	ll sd=0;
	
	rep(i,0,n)
	{
		sd=sd+a[i];
		s[i]=sd;
	}



	cin>>qs;
	rep(i,0,qs)
	{
		cin>>q;
		if(q>=a[n-1])
			cout<<n<<" "<<s[n-1]<<endl;
		else if(q<a[0])
		{
			cout<<"0 0"<<endl;
		}
		else
		{
		int mid=bs(0,n,q);
		cout<<mid+1<<" "<<s[mid]<<endl;
		}

	}	
//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}