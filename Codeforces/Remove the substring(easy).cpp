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
vector<int> indicesf,indicesb;
int sl=s.length();
int tl=t.length();

cout<<sl<<" "<<tl<<endl;
int i=0,j=0;

	while(j<sl && i<tl) 
	{
		if(t[i]==s[j])
		{
			i++;
			indicesf.pb(j);
		}
		j++;
	}
	

	j=sl-1;i=tl-1;

	while(j>=0 && i>=0) 
	{
		if(t[i]==s[j])
		{
			i--;
			indicesb.pb(j);
		}
		j--;
	}

	sort(indicesf.begin(),indicesf.end());
	sort(indicesb.begin(),indicesb.end());
	
	int maxdiff=0;
	for(i=1;i<indicesf.size();i++)
	{
		int diff=indicesf[i]-indicesf[i-1]-1;
		if(maxdiff<diff)
		{
			maxdiff=diff;
		}
	}
	for(i=1;i<indicesb.size();i++)
	{
		int diff=indicesb[i]-indicesb[i-1]-1;
		if(maxdiff<diff)
		{
			maxdiff=diff;
		}
	}

	if(indicesf[0]-0>maxdiff)
		maxdiff=indicesf[0]-0;
	if(indicesb[0]-0>maxdiff)
		maxdiff=indicesb[0]-0;


	if((sl-1)-indicesf[indicesf.size()-1]>maxdiff)
		maxdiff=(sl-1)-indicesf[indicesf.size()-1];

	if((sl-1)-indicesb[indicesb.size()-1]>maxdiff)
		maxdiff=(sl-1)-indicesb[indicesb.size()-1];


	cout<<maxdiff;
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}