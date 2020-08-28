														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
//ll M=1e+9;
int square(int n)
{
	if(n==0) return 0; 

	if (n < 0) n = -n; 

	int x=n>>1;
	
	if(n&1)
		return ((square(x)<<2) + (x<<2) + 1);
	else
		return ( square(x)<<2 );
}

void isPowerOf2(int n)
{
	if((n&(n-1))==0 && n!=0)
			cout<<"Yes Power of 2"<<endl;
		else
			cout<<"No"<<endl;
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<square(n)<<endl;
		

	}	
	return 0;
}