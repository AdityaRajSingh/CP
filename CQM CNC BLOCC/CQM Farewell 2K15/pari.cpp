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


ll a[100009],b[100009],c[100009];


void findCommon(int n1, int n2, int n3, int n) 
{ 
	ll ans=0;
    // Initialize starting indexes for ar1[], ar2[] and ar3[] 
    ll i = 0, j = 0, k = 0; 
  
    // Iterate through three arrays while all arrays have elements 
    while (i < n1 && j < n2 && k < n3 && i<n && j<n && k<n) 
    { 
         // If x = y and y = z, print any of them and move ahead  
         // in all arrays 
         if (a[i] == b[j] && b[j] == c[k]) 
         {   ans++;  i++; j++; k++; } 
  
         // x < y 
         else if (a[i] < b[j]) 
             i++; 
  
         // y < z 
         else if (b[j] < c[k]) 
             j++; 
  
         // We reach here when x > y and z < y, i.e., z is smallest 
         else
             k++; 
    }
    cout<<ans; 
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
	cin>>n;
rep(i,0,n)
{
	cin>>a[i];
}
rep(i,0,n)
{
	cin>>b[i];
}
rep(i,0,n)
{
	cin>>c[i];
}



  sort(a, a+n);


  
    sort(b, b+n);

  
    sort(c, c+n);




findCommon(n,n,n,n);


////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}