#include<bits/stdc++.h>
using namespace std;

int a[1000];
int n;
int la[1000];
int ra[1000];



void lcal()
{
	la[0]=0;
for(int i=1;i<n;i++)
{
	la[i]=max(la[i-1],a[i-1]);
}
}

void rcal()
{
	ra[n-1]=0;
for(int i=n-2;i>=0;i--)
{
	ra[i]=max(ra[i+1],a[i+1]);
}
}

void cal()
{
	int ans=0;
for(int i=0;i<n;i++)
{
	if( (min(la[i],ra[i])) >= a[i])
	{
		ans+=((min(la[i],ra[i]))-a[i]);
	}

}
cout<<ans<<endl;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
//////////////////////////////////////////////////////////////////////
	
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	lcal();
	rcal();
	cal();
	}	







//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}