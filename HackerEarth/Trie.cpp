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


struct node
{
struct node *child_node[26];
bool isEndOfWord;
}

struct node *newNode()
{
	struct 
}

void insert(sring s)
{
	for(int i=0;i<s.length();i++)
	{
		if(child_node[]==NULL)
		{
			child_node=newNode()
		}
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
	
int n,q,i,w;
cin>>n>>q;
string s;

for(i=1;i<=n;i++)
{
cin>>s;
cin>>w;
//cout<<s<<" "<<w<<endl;
}

for(i=1;i<=q;i++)
{
	cin>>s;
//	cout<<s<<endl;
}






////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}