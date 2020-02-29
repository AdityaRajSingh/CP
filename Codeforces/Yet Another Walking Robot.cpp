#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mk make_pair



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;

		double d=0.0;
		int k=0;int min=INT_MAX;
		int l,r;
		map<double,int> mp;
		rep(i,0,n)
		{

			if (mp.find(d) != mp.end()) 
			{
				k++;
				int w=k-mp[d];

				if(w<min)
				{
					min=w;
					
					l=mp[d]+2;
					r=i+1;
				}
			}
			else
			{
				mp[d]=i;
				k++;
			}

			if(s[i]=='L')
			{
				d-=1;
			}
			if(s[i]=='R')
			{
				d+=1;
			}
			if(s[i]=='U')
			{
				d+=0.1;
			}
			if(s[i]=='D')
			{
				d-=0.1;
			}
		}
	}	






	
	return 0;
}