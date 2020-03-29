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

bool contain(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a'|| s[i]=='z'||s[i]=='p')
			return true;
	}
	return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	string n;
	cin>>n;
	int l=n.length();
	int k=0;
	for(int i=0;i<l;i++)
	{
		for(int j=1;j<=l-i;j++)
		{
			string s=n.substr(i,j);
			 //cout<<s<<endl;
			if(contain(s))
			{
				k++;
			}
		}
	}
	cout<<k;
	
	return 0;
}