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


void Tower(int n,char from, char to, char via)
{
	if(n==1)
		cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
	else
	{
		Tower(n-1,from,via,to);
		cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
		Tower(n-1,via,to,from);
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
	ll a;
cin>>a;	
Tower(a,'A','C','B');






////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}