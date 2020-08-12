#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

int noOfPaths(int n,int m){
	if(n==1 || m==1)
	{
		return 1;
	}

	return noOfPaths(n-1,m)+noOfPaths(n,m-1);
}

int noOfPathsDp(int i, int j,int n,int m){
	if(i==n-1 || j==m-1)
	{
		return 1;
	}

	int c=0;
	if(i+1!=n)
	{
		c+=noOfPathsDp(i+1, j,n,m);
	}

	if(j+1!=m)
	{
		c+=noOfPathsDp(i, j+1,n,m);
	}

	return c;
}




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	
	int n,m;
cin>>n>>m;
int i=0,j=0;

cout<<noOfPaths(n,m)<<endl;


cout<<noOfPathsDp(i,j,n,m);







//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}