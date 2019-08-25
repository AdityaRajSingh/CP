// /******************************************
// * AUTHOR : ADITYA RAJ SINGH *
// ******************************************/
// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef std::vector<ll> vll;

// #define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
// #define endl '\n'
// #define pb push_back
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// #define cres(c,n) (c).clear(),(c).resize(n)
// #define all(a) (a).begin(), (a).end()
// #define ff first
// #define ss second
// #define mk make_pair

// ll a[1000009];

// int main()
// {
// 	#ifndef ONLINE_JUDGE
// 		freopen("/home/aadi/Documents/input.txt", "r", stdin);
// 	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
// 	#endif
// 	fast;
// ////////////////////////////////////////////////////////////////////////////////////////////
	
// ll n,k,q=0,w=0;
// cin>>n>>k;
// rep(i,0,n)
// {
// cin>>a[i];
// if(a[i]==0)
// q++;
// }

// rep(i,0,n)
// {
// 	if(a[i]==1)
// 	{
// 		for(int j=i+1;j<=i+k;j++)
// 		{
// 			if(a[j]==0)
// 				a[j]=2;
// 		}
// 		//i=i+k;
// 	}
// }


// for(int i=n-1;i>=0;i--)
// {
// 	if(a[i]==1)
// 	{
// 		for(int j=i-1;j>=i-k;j--)
// 		{
// 			if(a[j]==0)
// 				a[j]=2;
// 		}
// 		//i=i-k;
// 	}
// }

// rep(i,0,n)
// {
// 	if(a[i]==0)
// 	{
// 		w++;
// 	}
// }

// cout<<q-w;


// ////////////////////////////////////////////////////////////////////////////////////////////

// 	#ifndef ONLINE_JUDGE
//     	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
//     #endif
	
// 	return 0;
// }

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

vector <ll> a;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
ll n,k,q=0,w=0,y;
cin>>n>>k;
for(ll i=1;i<=n;i++)
{
cin>>y;
if(y==1)
a.push_back(i);
}
ll ans=0;
for(ll i=0;i<a.size()-1;i++)
{
	ll d=a[i+1]-a[i]-1;
	if(d<=2*k && d>0)
	{
		ans+=d;
		//cout<<ans<<endl;
	}
	else if(d>2*k)
	{
		
		ans+=(2*k);
		//cout<<ans<<endl;
	}

}

int s=a[0];
int e=a[a.size()-1];
int di=s-1;
if(di<=k)
	ans+=di;
else
	ans+=k;

di=n-e;

if(di<=k)
	ans+=di;
else
	ans+=k;

cout <<ans;


////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}