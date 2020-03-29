#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair


void f()
{
	

	cout<<"2 2"<<endl;
	cout<<"1 3"<<endl;
	cout<<"3 1"<<endl;
	cout<<"2 2"<<endl;

	cout<<"3 3"<<endl;
	cout<<"1 5"<<endl;
	cout<<"5 1"<<endl;
	cout<<"3 3"<<endl;

	cout<<"4 4"<<endl;
	cout<<"1 7"<<endl;
	cout<<"7 1"<<endl;
	cout<<"4 4"<<endl;

	cout<<"5 5"<<endl;
	cout<<"2 8"<<endl;
	cout<<"8 2"<<endl;
	cout<<"5 5"<<endl;

	cout<<"6 6"<<endl;
	cout<<"4 8"<<endl;
	cout<<"8 4"<<endl;
	cout<<"6 6"<<endl;

	cout<<"7 7"<<endl;
	cout<<"6 8"<<endl;
	cout<<"8 6"<<endl;
	cout<<"7 7"<<endl;

	cout<<"8 8"<<endl;

}



int main()
{
	#ifndef ONLINE_JUDGEx
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,r,c;
	cin>>t;
	while(t--)
	{

		cin>>r>>c;
		if(r!=c)
		{
			cout<<"27"<<endl;
			ll x=(r+c)/2;
			cout<<x<<" "<<x<<endl;
			cout<<"1 1"<<endl;	
			f();		
		}
		else
		{
			if(r==1 && c==1)
			{
				cout<<"25"<<endl;
				f();
			}
			else
			{
				cout<<"26"<<endl;
				cout<<"1 1"<<endl;
				f();
			}
		}
	}	

	return 0;
}