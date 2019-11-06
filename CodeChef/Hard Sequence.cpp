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

int a[150];
int b[150];

int arr[1000];

void sequence()
{
	a[1]=0;a[2]=0;
	
	for(int i=3;i<=128;i++)
	{
		int k=0;

		for(int j=i-2;j>=1;j--)
		{
			if(a[j]==a[i-1])
			{
				a[i]=((i-1)-j);
				k=1;
				break;
			}
		}
		if(k==0)
		{
			a[i]=0;
		}
	}
}

void noOfOccurunces1()
{
	for(int i=1;i<=128;i++)
	{
		arr[a[i]]++;
		b[i]=arr[a[i]];
	}
}




int noOfOccurunces(int n)
{
	int k=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==a[n])
			k++;
	}
	return k;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n;
	cin>>t;
	sequence();
	// for(int i=1;i<=128;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	//cout<<endl;
	noOfOccurunces1();
	while(t--)
	{
		cin>>n;
		cout<<b[n]<<endl;
		//cout<<noOfOccurunces(n)<<endl;

	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}