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

//Best O(nlogn)
//Avg	O(nlogn)
//Worst O(nlogn)


void merge(ll a[],ll start, ll mid, ll end)
{
	ll 	temp[end-start+1];
	ll k=0,l=start,r=mid+1;
	while(l<=mid && r<=end)
	{
		if(a[l]<=a[r])
		{
			temp[k++]=a[l++];
		}
		else
		{
			temp[k++]=a[r++];
		}
	}
	while(l<=mid)
	{
		temp[k++]=a[l++];
	}
	while(r<=end)
	{
		temp[k++]=a[r++];
	}
	for(ll i=start;i<=end;i++)
	{
		a[i]=temp[i-start];
	}

}


void mergeSort(ll a[],ll start, ll end)
{
	if(start<end)
	{
		ll mid=start+(end-start)/2;
		mergeSort(a,start,mid);
		mergeSort(a,mid+1,end);
		merge(a,start,mid,end);
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
mergeSort(a,start,end);

rep(i,0,n)
cout<<a[i]<<" ";



////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}