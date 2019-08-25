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

vll a;
vll b;


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
  ll t,n,n1;
  cin>>t;
  while(t--)
  {

  cin>>n1;
  rep(i,0,n1)
  {
  	cin>>n;
  a.pb(n);
  }
    cin>>n1;
  rep(i,0,n1)
  {
  	cin>>n;
  b.pb(n);
  }



std::set< ll > s1(all(a));
std::vector< ll > v1(all(s1));

std::set< ll > s2(all(b));
std::vector< ll > v2(all(s2));


for(int i=0; i < v1.size(); i++)
      cout<<v1.at(i)<< ' ';

  cout<<endl;
for(int i=0; i < v2.size(); i++)
      cout<<v2.at(i)<< ' ';

   cout<<endl;

   a.clear();
   b.clear();
v1.clear();
s1.clear();
v2.clear();
s2.clear();
}


////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}