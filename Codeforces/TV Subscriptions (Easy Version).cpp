/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

#define rep(i,a,b) for(int i=a;i<b;i++)

int siz(map<int,int> mp)
{
	int k=0;
	for(auto it:mp)
	{
		if(it.second>0)
			k++;
	}
	return k;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	int t,n,k,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d;
		int a[n];

		map<int,int> mp;
		rep(i,0,n)
			cin>>a[i];
		rep(i,0,d)
		{
			mp[a[i]]++;
		}
		int minAns=siz(mp);
		rep(i,d,n)
		{
			mp[a[i]]++;
			mp[a[i-d]]--;
			int si=siz(mp);
			if (si<minAns)
			{
				minAns=si;
			}
		}
		cout<<minAns<<endl;
	}	

	return 0;
}