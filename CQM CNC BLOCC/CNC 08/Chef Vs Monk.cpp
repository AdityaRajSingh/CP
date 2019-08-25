#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void fun(long a, long b);
long k=1;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("F:\\input.txt","r",stdin);
		freopen("F:\\output.txt","w",stdout);
	#endif
//////////////////////////////////////////////////////////////////////
long i,q,arr[100000][2];
cin>>q;
for(i=0;i<q;i++)
{
cin>>arr[i][0]>>arr[i][1];
}
for(i=0;i<q;i++)
{
fun(arr[i][0],arr[i][1]);

}

//////////////////////////////////////////////////////////////////////
	#ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


	return 0;
}
void fun(long a, long b)
{
	cout<<a<<" "<<b<<endl;
	
if(a==b)
	cout<<a;

else
{

	if(a%2!=0 || b%2!=0 || a==0 || b==0 )
		{
			cout<<k;
        }
	else
		{
			 fun(a/2,b/2);
			k++;
		}

}

}