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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
int q,n;
cin>>q;
while(q--)
{
	int n;
	cin>>n;
	//vector<int> s;
	// int a[10005]={0};
	// int q=0;
	// for(int i=0;i<4*n;i++)
	// {
	// 	int x;
	// 	cin>>x;
	// 	a[x]++;
	// }
	// for(int i=0;i<10005;i++)
	// {
	// 	if(a[i]!=0)
	// 	{
	// 		if(a[i]%2==1)
	// 		{
	// 				cout<<"NO"<<endl;
	// 				q=1;
	// 				break;
	// 		}
	// 		else 
	// 		{
	// 			for(int j=1;j<=a[i]/2;j++)
	// 			{
	// 				s.pb(i);
	// 			}
	// 		}
	// 	}
	// }
	// int l=s.size();
	// int prod=s[0]*s[l-1],i;
	// for( i=0;i<l/2;i++)
	// {
	// 	if(s[i]*s[l-i-1]!=prod && q!=1)
	// 	{
	// 		cout<<"NO"<<endl;
	// 		q=1;
	// 		break;
	// 	}
	// }
	// if(i==l/2 && q!=1)
	// {
	// 	cout<<"YES"<<endl;
	// }



vector<int> v;

for(int i=0;i<4*n;i++)
	{
		int x;
		cin>>x;
		v.pb(x);
	}
	int q=0;

sort(v.begin(),v.end());
int l=v.size();
	int prod=v[0]*v[l-1];
	for(int i=1;i<l/2;i++)
	{
		if(i%2==1)
		{
			if(!(v[i]==v[i-1] && v[l-i-1]==v[l-i]))
			{
				cout<<"NO"<<endl;
				q=1;
				break;	
			}
		}
		if(v[i]*v[l-i-1]!=prod)
		{
			cout<<"NO"<<endl;
			q=1;
			break;
		}
	}
	if(q!=1)
	{
		cout<<"YES"<<endl;
	}

}




////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}