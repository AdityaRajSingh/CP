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
//Avg	O(nlogn)
//Worst O(nlogn)


ll  partition(ll a[],ll start, ll end)
{
	ll pivot=a[start],i=start+1;;
	for(ll j=start+1;j<=end;j++)
	{
		if(a[j]<pivot)
		{
			swap(a[j],a[i]);
			i++;
		}
	}
	
	swap(a[i-1],a[start]);
	
	return i-1;


}


void quickSort(ll a[],ll start, ll end)
{
	if(start<end)
	{
		ll piv_pos=partition(a,start,end);
		quickSort(a,start,piv_pos-1);
		quickSort(a,piv_pos+1,end);
		
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
ll start=0,end=n-1;
quickSort(a,start,end);

rep(i,0,n)
cout<<a[i]<<" ";



////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}