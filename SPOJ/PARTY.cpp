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

ll W,n;
int w[500],v[500];




ll knapsack(ll W,ll n)
{

	if(W==0 || n==0)
	{
		return 0;
	}

	if(W-w[n-1]<0)
		return knapsack(W,n-1);

	return max(v[n-1]+knapsack(W-w[n-1],n-1),knapsack(W,n-1));
	
	

}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	cin>>W>>n;
	while(W!=0 && n!=0)
	{
		rep(i,0,n)
		{
			cin>>w[i]>>v[i];
		}
		cout<<" "<<knapsack(W,n)<<endl;
		cin>>W>>n;
	}

	return 0;
}