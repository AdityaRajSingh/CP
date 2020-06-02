#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	string s;
	ll n;

	cin>>s;
	ll l=s.length();
	cin>>n;


	string ans=s;

	l=ans.length();

	
	stack <char> stac;	

	rep(i,0,l)
	{
			if(stac.empty())
			{
				stac.push(ans[i]);
			}
		
		else
		{
			while(!stac.empty() && ans[i]<stac.top() && n>0)
			{
					stac.pop();
					n--;	
			}
				stac.push(ans[i]);
		}
		//cout<<ans[i]<<endl;

	}
	
	string ans1="";
	while(!stac.empty())
	{
		if(n<=0)
		{
			ans1+=stac.top();
			stac.pop();
		}
		else
		{
			stac.pop();
			n--;
		}
		
	}

	reverse(ans1.begin(),ans1.end());
	
	l= ans1.length();
	ll k=0;
	rep(i,0,l)
	{
		if(ans1[i]=='0')
		{
			k++;
		}
		else
		{
			break;
		}
	}


	if(k==l)
	{
		cout<<"0";
		return 0;
	}
	rep(i,k,l)
	cout<<ans1[i];




	return 0;
}