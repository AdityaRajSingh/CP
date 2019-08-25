/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long l;
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
		l a[50009];
		l b[50009];
		l c[50009];
		l q,r;
		scanf("%d",&n);
		for(int i=1;i<=n-4;i++)
		{
			printf("1 %d %d %d\n",i,i+2,i+4);
  			fflush(stdout); 
  			scanf("%ld",&q);
  			a[i-1]=q;
		}

		    printf("1 %d %d %d\n",n-3,n-1,1);
  			fflush(stdout); 
  			scanf("%ld",&q);
  			a[n-4]=q;

  			printf("1 %d %d %d\n",n-2,n,2);
  			fflush(stdout); 
  			scanf("%ld",&q);
  			a[n-3]=q;

  			printf("1 %d %d %d\n",n-1,1,3);
  			fflush(stdout); 
  			scanf("%ld",&q);
  			a[n-2]=q;

  			printf("1 %d %d %d\n",n,2,4);
  			fflush(stdout); 
  			scanf("%ld",&q);
  			a[n-1]=q;

  			for(int i=0;i<n-2;i++)
			{
				b[i]=a[i]^a[i+2];
			}

			b[n-2]=a[n-2]^a[0];
			b[n-1]=a[n-1]^a[1];


  			for(int i=0;i<=3;i++)
			{
				c[i]=b[i]^a[n-4+i];
			}
			for(int i=4;i<=n-1;i++)
			{
				c[i]=b[i]^a[i-4];
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