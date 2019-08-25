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

		




int Search(int l, int r) 
{ 
  int q;

          printf("1 500\n");
          fflush(stdout);
          scanf("%d",&q);
          if(q==1)
          {
            printf("2 \n");
            fflush(stdout);
            r=500;
          }
          else
            l=501;






        for(int i=l;i<=r;i++)
        {
          printf("1 %d\n",i);
          fflush(stdout);
          scanf("%d",&q);
          if(q==1)
          {
            printf("2 \n");
          fflush(stdout);
            return i;
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

	
	int result = Search( 1, n); 
    //cout<<3<<" "<<result<<endl;
	printf("3 %d\n",result);
	fflush(stdout);
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}