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




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
 ll n,m;
 cin>>n>>m;
vector<string> p;
 rep(i,0,n)
 {
 	string s;
 	cin>>s;
p.pb(s);
 }
ll k=0;
  rep(i,0,n-2)
 {
 	rep(j,1,m-1)
 	{
 		if(p[i][j]=='*' && p[i+1][j]=='*' && p[i+2][j]=='*' && p[i+1][j-1]=='*' && p[i+1][j+1]=='*')
 		{
 			k++;
 		}
 	}
 }

 if(n<3 || m<3)
 {
 	cout<<0<<endl;
 }
 else
 {
 	cout<<k<<endl;	
 }







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}