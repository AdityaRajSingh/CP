/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

//#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair
	



int main()
{


	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	//fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int a[50005];
		int q;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			printf("1 %d %d %d\n",i,i,i);
  			fflush(stdout);
  			scanf("%d",&q);
  			a[i-1]=q;
		}
		


  		printf("2 ");
  		fflush(stdout);
  		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
			fflush(stdout);
		}
		 printf("\n");
  		fflush(stdout);

		scanf("%d",&q);

	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}