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
		
		

int binarySearch(int l, int r) 
{ 
	int q;
    while (l <= r) 
    { 
        int m = l + (r-l)/2; 
  		//cout<<1<<" "<<m+1<<endl;
  		printf("1 %d\n",m+1);
  		fflush(stdout);
  		scanf("%d",&q);



  		if(q==1)
  			{
				printf("2 \n");
  				fflush(stdout);/******************************************
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
		
		

int binarySearch(int l, int r) 
{ 
	int q;
    while (l <= r) 
    { 
        int m = l + (r-l)/2; 
  		//cout<<1<<" "<<m+1<<endl;
  		printf("1 %d\n",m+1);
  		fflush(stdout);
  		scanf("%d",&q);



  		if(q==1)
  			{
				printf("2 \n");
  				fflush(stdout);
  				printf("1 %d\n",m);
  				fflush(stdout);
  				scanf("%d",&q);
  				if(q==0)
  					return m+1;
  				else
  					r = m - 1;
  			}
  		if(q==0)
  			{
  				l=m+1;
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


	
	int result = binarySearch( 0, n-1); 
    //cout<<3<<" "<<result<<endl;
	printf("3 %d\n",result);
	fflush(stdout);
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}
  				printf("1 %d\n",m);
  				fflush(stdout);
  				scanf("%d",&q);
  				if(q==0)
  					return m+1;
  				else
  					r = m - 1;
  			}
  		if(q==0)
  			{
  				l=m+1;
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


	
	int result = binarySearch( 0, n-1); 
    //cout<<3<<" "<<result<<endl;
	printf("3 %d\n",result);
	fflush(stdout);
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}