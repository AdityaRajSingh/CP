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
int n,s,q,i,j,w,k;
cin>>n>>s>>q;
int arr[100][10000],f[10000][3];

for(i=0;i<n;i++)
	f[i][0]=(i+1);

	for(i=0;i<s;i++)
	{
		cin>>w;
		int b;
		for(j=0;j<w;;j++)
		{
cin>>b;
f[b-1][3]=(i+1);
}



char c[10000][3];
for(i=0;i<q;i++)
{
for(j=1;arr[i][j]!='\n';j++)
cin>>c[i][j];
}



for(i=0;i<n;i++)
	f[i][0]=(i+1);

for(i=0;i<n;i++)
{
if(arr[])
}


	











//////////////////////////////////////////////////////////////////////
	#ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


	return 0;
}