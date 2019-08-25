/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)



int multiply(int a[],int n, int asize)
{
	int carry=0,prod=0;
	for(int i=0;i<asize;i++)
	{
		prod=(a[i]*n)+carry;
		a[i]=prod%10;
		carry=prod/10;		
	}
	while(carry>0)
	{
		a[asize]=carry%10;
		carry=carry/10;
		asize++;
	}
	return asize;
}




void factorial(ll n)
{
	int a[10000];
	int asize=1;
	a[0]=1;
	for(int i=2;i<=n;i++)
	{
		asize=multiply(a,i,asize);
	}
	for(int i=asize-1;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<endl;
}




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	factorial(n);
	}	
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}