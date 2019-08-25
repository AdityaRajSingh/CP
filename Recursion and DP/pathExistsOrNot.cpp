/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair

bool path(int x, int y, int m, int n)
{

int  g[n][n] =    { { 0 , 3 , 0 , 1 }, 
				    { 3 , 0 , 3 , 3 }, 
				    { 2 , 3 , 3 , 3 }, 
				    { 0 , 3 , 3 , 3 } 
				}; 

	if(g[x][y]==2)
		return true;
	if(x>m || y>n)
		return false;
	if(g[x][y]==0)
		return false;
	

	return (path(x+1,y,m,n)|| path(x+1,y+1,m,n) || path(x,y+1,m,n));

}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll n;
	n=4;	
cout<<path(0,3,3,3)<<endl;


cout<<true;




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}