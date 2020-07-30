														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)

string s;

ll rec(char c,int st,int n)
{
	//cout<<c<<endl;
	
	if(n-st==1)
	{
		if(s[st]!=c)
			return 1;
		else
			return 0;
	}
	int mid=(st+n)/2;
	int k1=0,k2=0;
	for(int i=st;i<mid;i++)
	{
		if(s[i]!=c)
			k1++;
	}
	for(int i=mid;i<n;i++)
	{
		if(s[i]!=c)
			k2++;
	}
	return min(k1+rec(c+1,mid,n),k2+rec(c+1,st,mid));
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		cin>>s;
		//cout<<s<<endl;
		

		cout<<rec('a',0,n)<<endl;
		


	}	
	return 0;
}