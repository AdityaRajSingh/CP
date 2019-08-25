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
	

string s;
cin>>s;
int k;
cin>>k;
int freq[26]={0};
for(int i=0;i<s.length();i++)
{
	freq[s[i]-'a']++;
}
map <int, int> m;
for(int i=0;i<26;i++)
{
	if(freq[i]!=0)
		m.insert(pair<int,int>(freq[i],i));
}

if(k>m.size())
{
	cout<<-1;
}
else
{
char q;
int w=0	;
	for(auto it: m)
	{
		if(w==m.size()-k)
		{
			q=char(it.second+97);
		}
		w++;
	}
	cout<<q;
}




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}