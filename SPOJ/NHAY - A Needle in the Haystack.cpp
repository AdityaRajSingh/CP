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

string txt,patt;
int txtl,pattl;

int lps[100000];

void computeLPS()
{
	lps[0]=0;
	ll j=0,i=1;
	while(i<pattl)
	{
		if(patt[i]==patt[j])
		{
			lps[i]=j+1;
			i++;
			j++;
		}
		else
		{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else
			{
				lps[i]=lps[j];
				i++;
			}			
		}
	}
}

void displayLPS()
{
	rep(i,0,pattl)
	{
		cout<<lps[i]<<endl;
	}
}

void KMP()
{
	vector<ll> v;
	ll j=0,k=0,i=0;
	while(i<txtl)
	{

		if(j==pattl-1 && txt[i]==patt[j])
		{
			v.push_back(i-j);
		}
		if(txt[i]==patt[j])
		{
			j++;
			i++;
		}
		else
		{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else
			{
				i++;
			}
		}

	}

		sort(v.begin(), v.end());
		rep(i,0,v.size())
		{
			cout<<v[i]<<endl;
		}
		cout<<endl;

}




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
while(cin>>pattl)
	{
		cin>>patt>>txt;
		txtl=txt.length();
		lps[100000]={0};
		computeLPS();
		//displayLPS();
		KMP();
	}


	
	return 0;
}