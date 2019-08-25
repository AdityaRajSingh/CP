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
	
string s,t;
cin>>s;
cin>>t;
int k=0;
if(s.length()!=t.length())
k=1;
else
{
for(int i=0;i<s.length();i++)
{
	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u' ) 
	{
		if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' ||t[i]=='u' ) 	
			{k=0;}
		else
			{k=1;

				break;
				}
	}
	else
	{
		if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' ||t[i]=='u' )
			{k=1;;
			break;}
		else
			{k=0;}
	}
}
}
if(k==0)
	cout<<"Yes";
else
	cout<<"No";





////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}