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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair
#define N 100

int w[N],n;
int v[N];



int maxValue(int W,int i)
{
	if(W==0 || i>n-1)
		return 0;


	
	if(W-w[i]<0)
	{
		return maxValue(W,i+1);
	}
	return max(v[i]+maxValue(W-w[i],i+1),maxValue(W,i+1));	
}

int maxValueRecursion(int i,int W)
{
	if(  W==0 || i>n-1)
	{
		return 0;
	}
	
	if(W-w[i]<0)
	{
		return 	maxValueRecursion(i+1,W);
	}
	
	return max(v[i]+maxValueRecursion(i+1,W-w[i]),maxValueRecursion(i+1,W));	
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,W;
	cin>>t;
	while(t--)
	{
		cin>>W>>n;
		rep(i,0,n)
		{
			cin>>w[i]>>v[i];
		}
		cout<<"Hey stupid robber, you can get "<<maxValue(W,0)<<"."<<endl;
		cout<<"Hey stupid robber, you can get "<<maxValueRecursion(0,W)<<"."<<endl;

	}	




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}