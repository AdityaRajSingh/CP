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
int j, i,t,arr[100000][2];
char s[100000][12];
cin>>t;
for(i=0;i<t;i++)
{
cin>>arr[i][0]>>arr[i][1];
cin>>s[i];
}
for(i=0;i<t;i++)
{
	for(j=0;j<arr[i][0];j++)
		{
		if(s[i][j]!='9' && arr[i][1]!=0)
		{
			s[i][j]='9';
			arr[i][1]--;
		}

}
}
for(i=0;i<t;i++)
	cout<<s[i]<<endl;
//////////////////////////////////////////////////////////////////////
	#ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


	return 0;
}