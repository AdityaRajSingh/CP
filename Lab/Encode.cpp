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

vector<string> v;



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;

	ll t;
	cin>>t;
	rep(i,0,t)
	{
		char c;
		cin>>c;
		string code;
		cin>>code;
		v.push_back(code);
		cout<<c<<" "<<code<<endl;

	}
	ll q=0;

	rep(i,0,v.size())
	{
		rep(j,i,v.size())
		{
			string n1=v[i]+v[j];
			string n2=v[j]+v[i];
			rep(k,0,v.size())
			{
				if(v[k]==n1 || v[k]==n2)
				{
					q=1;
					break;
				} 
			}
		}
	}
	if(q==0)
	{
		cout<<"unambigous"<<endl;
	}
	else
	{
		cout<<"ambigous"<<endl;
	}





	
	return 0;
}