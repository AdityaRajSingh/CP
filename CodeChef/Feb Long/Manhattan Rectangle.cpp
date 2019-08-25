/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


//#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	//fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,g,k=0,c[10];
	scanf("%d",&t);
	while(t--)
	{
		for(int i=0;i<=100;i++)
		{
			for(int j=0;j<=100;j++)
			{
			printf("Q %d %d\n",i,j);
			fflush(stdout);	
			scanf("%d",&g);
			if(g==0)
			{
				c[k]=i;
				k++;
				c[k]=j;
				k++;
				break;
			}

			}
			if(k==4)
				break;
		}
		int q=c[0],w=c[1],e=c[2],r=c[3];
		printf("A %d %d %d %d\n",q,w,e,r);
		fflush(stdout);
		scanf("%d",&g);
	}
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}