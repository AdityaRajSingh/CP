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

		


int ternarySearch(int l, int r) 
{ 
	int q;
	printf("1 %d\n",1);
  		fflush(stdout);
  		scanf("%d",&q);
  		if(q==1)
  			{ 
  				printf("2 \n");
  				fflush(stdout);
  				return 1;
  			}

    while (l <= r) 
    { 
        //int m = l + (r-l)/2; 

        int m1 = l + (r - l)/3; 
        int m2 = m1 + (r - l)/3; 
  		//cout<<1<<" "<<m+1<<endl;
  		printf("1 %d\n",m1);
  		fflush(stdout);
  		scanf("%d",&q);

  		if(q==1)
  		{
  			printf("2 \n");
  			fflush(stdout);
  			printf("1 %d\n",m1-1);
  			fflush(stdout);
  			scanf("%d",&q);
  			if(q==0)
  				return m1;
  			if(q==1)
  				{
  					printf("2 \n");
  					fflush(stdout);
  					r = m1 - 1;
  				}
  		}
  		else
  		{
  			printf("1 %d\n",m2);
  			fflush(stdout);
  			scanf("%d",&q);
  			 if(q==1)
  			{
  				printf("2 \n");
  				fflush(stdout);
  				printf("1 %d\n",m2-1);
  				fflush(stdout);
  				scanf("%d",&q);
  				if(q==0)
  					return m2;
  				if(q==1)
  				{
  					printf("2 \n");
  					fflush(stdout);
  					r = m2 - 1;
  					l=m1+1;
  				}
  			}
  			else
  			{
  				l=m2+1;
  			}

  		}

    } 
  

} 


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	//fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int n,c;
	scanf("%d",&n);
	scanf("%d",&c);


	
	int result = ternarySearch( 1, n); 
    //cout<<3<<" "<<result<<endl;
	printf("3 %d\n",result);
	fflush(stdout);
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}