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

ll arr[100009];





int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t;int a;
	cin>>t;
	string s;
	while(t--)
	{
		int arr[26]={0},count,min=INT_MAX;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			for(char j='A';j<='Z';j++)
			{
			if(s[i]==j)
				arr[j-'A']++;
			}
		}
		sort(arr,arr+26, greater<int>());

		int l=s.length();


		for(int i=1;i<=26;i++)
		{
			if(l%i==0)
			{
				int diff=0,add=0;
				count=l/i;

				for(int j=0;j<i;j++)
				{
					if(arr[j]>count)
					{
						diff+=arr[j]-count;
					}
					else if(arr[j]<count)
					{
						add+=count-arr[j];
					}
				}

				int sum=max(add,diff);
				if(sum<min)
					min=sum;
			}
			}
	cout<<min<<endl;
	}




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}