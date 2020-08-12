#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

string s;

void path()
{
	stack<char> stac;
	stack<char> sym;
	stac.push('@');
for(int i=1;i<s.length();i++)
{
	if(s[i]=='.' && sym.top()!='.')
		{
			sym.push('.');

		}

	else if(s[i]=='.' && sym.top()=='.' && stac.top()!='@')
	{
		stac.pop();
		sym.pop();

	}
		else if(s[i]=='.' && sym.top()=='.' && stac.top()=='@')
	{
		
		sym.push(s[i]);

	}
	else if(s[i]=='/' )
	{
		
		sym.push('/');
	}
	else{
		stac.push(s[i]);
		cout<<stac.top();
		cout<<sym.top();

	}
}
string str="";
while(!stac.empty())
{
	if(stac.top()=='@')
		str+="/";
	else
		str+=stac.top();
	stac.pop();
}
for(int i=str.length()-1;i>=0;i--)
{
	cout<<str[i]<<"/";
}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	

cin>>s;
path();






//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}