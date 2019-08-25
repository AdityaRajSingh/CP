#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("F:\\input.txt","r",stdin);
		freopen("F:\\output.txt","w",stdout);
	#endif
//////////////////////////////////////////////////////////////////////
int n,i,arr[100000],m=0,s=0;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
for(i=0;i<n;i++)
{
   if(arr[i]>=m)
	m=arr[i];
}
for(i=0;i<n;i++)
{
arr[i]=(m-arr[i]);
}
for(i=0;i<n;i++)
{
s=s+arr[i];
}
cout<<s;

//////////////////////////////////////////////////////////////////////
	#ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


	return 0;
}