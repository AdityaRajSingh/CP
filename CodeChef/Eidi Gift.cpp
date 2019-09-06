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
	
	int t,a1,a2,a3,c1,c2,c3;
	cin>>t;
	while(t--)
	{
		cin>>a1>>a2>>a3>>c1>>c2>>c3;
		//cout<<a1<<a2<<a3<<c1<<c2<<c3<<endl;
		int k=0;
		if(a1==a2==a3 && c1==c2==c3)
			k=1;


		else if(a1>a2 && a2==a3 && c1>c2 && c2==c3)
			k=1;

		else if(a1==a3 && a3>a2 && c1==c3 && c3>c2)
			k=1;



		else if(a2>a1 && a1==a3 && c2>c1 && c1==c3)
			k=1;

		else if(a2==a3 && a3>a1 && c2==c3 && c3>c1)
			k=1;


		else if(a3>a2 && a2==a1 && c3>c2 && c2==c1)
			k=1;

		else if(a2==a1 && a1>a3 && c2==c1 && c1>c3)
			k=1;




		else if(a1>a2 && a2>a3 && c1>c2 && c2>c3)
			k=1;
		else if(a1>a3 && a3>a2 && c1>c3 && c3>c2)
			k=1;

		else if(a2>a1 && a1>a3 && c2>c1 && c1>c3)
			k=1;
		else if(a2>a3 && a3>a1 && c2>c3 && c3>c1)
			k=1;

		else if(a3>a2 && a2>a1 && c3>c2 && c2>c1)
			k=1;
		else if(a3>a1 && a1>a2 && c3>c1 && c1>c2)
			k=1;

		if(k==1)
			cout<<"FAIR"<<endl;
		else
			cout<<"NOT FAIR"<<endl;
	}	







////////////////////////////////////////////////////////////////////////////////////////////

	
	return 0;
}