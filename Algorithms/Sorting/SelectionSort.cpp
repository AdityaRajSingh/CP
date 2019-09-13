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

//Best O(n2)
//Avg	O(n2)
//Worst O(n2)


void selectionSort(ll a[],ll n)
{
	rep(i,0,n)
	{
		ll minimum=i;
		rep(j,i+1,n)
		{
			if(a[j]<a[minimum])
			{
				minimum=j;
			}
		}
		swap(a[i],a[minimum]);
	}
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
cin>>n;//8;
ll a[n];//6 8 1 4 5 3 7 2
rep(i,0,n)
cin>>a[i];

selectionSort(a,n);

rep(i,0,n)
cout<<a[i]<<" ";



////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}