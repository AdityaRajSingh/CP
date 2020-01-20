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



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll m,n;
	cin>>m>>n;
	int a[m][n];
	rep(i,0,m)
	{
		rep(j,0,n)
		{
			cin>>a[i][j];
		}
	}
	ll k=0;
	if(m==1 && n==1)
	{
			cout<<0;
			return 0;
	}
	else if(m==1 && n!=1)
	{
		rep(i,1,n-1)
		{
			if(a[0][i]==1 && (a[0][i+1]==1 || a[0][i-1]==1))
				k++;
		}
		if(a[0][n-1]==1 && a[0][n-2]==1)
			k++;

		if(a[0][0]==1 && a[0][1]==1)
			k++;


		cout<<k;
		return 0;
	}
	else if(n==1 && m!=1)
	{
		rep(i,0,m-1)
		{
			if(a[i][0]==1 && (a[i+1][0]==1 || a[i-1][0]==1))
				k++;
		}
		if(a[m-1][0]==1 && a[m-2][0]==1)
			k++;
		if(a[0][0]==1 && a[1][0]==1)
			k++;
		cout<<k;
		return 0;
	}
	else
	{

		rep(i,1,m-1)
		{
			if(a[i][0]==1 && (a[i][1]==1 || a[i+1][0]==1 || a[i+1][1]==1 || a[i-1][0]==1))
			{
				k++;
			}
		}
		if(a[m-1][0]==1 && (a[m-2][0]==1 || a[m-2][1]==1 || a[m-1][1]==1))
		{
			k++;
		}
		if(a[0][0]==1 && (a[0][1]==1 || a[1][0]==1 || a[1][1]==1))
		{
			k++;
		}


		rep(i,1,m-1)
		{
			if(a[i][n-1]==1 && (a[i][n-2]==1 || a[i+1][n-1]==1 || a[i+1][n-2]==1 || a[i-1][n-1]==1))
			{
				k++;
			}
		}
		if(a[m-1][n-1]==1 && (a[m-2][n-1]==1 || a[m-2][n-2]==1 || a[m-1][n-2]==1))
		{
			k++;
		}
		if(a[0][n-1]==1 && (a[0][n-2]==1 || a[1][n-1]==1 || a[1][n-2]==1))
		{
			k++;
		}



		rep(i,1,n-1)
		{
			if(a[0][i]==1 && (a[0][i-1]==1 || a[0][i+1]==1 || a[1][i]==1 || a[1][i-1]|| a[1][i+1]))
			{
				k++;
			}
		}
		

		rep(i,1,n-1)
		{
			if(a[m-1][i]==1 && (a[m-1][i-1]==1 || a[m-1][i+1]==1 || a[m-2][i]==1 || a[m-2][i-1]|| a[m-2][i+1]))
			{
				k++;
			}
		}



		rep(i,1,m-1)
		{
			rep(j,1,n-1)
			{
				if(a[i][j]==1 && (a[i][j+1]==1 || a[i][j-1]==1 || a[i+1][j]==1 || a[i-1][j]==1 || a[i+1][j+1]==1 || a[i-1][j-1]==1 || a[i-1][j+1]==1 || a[i+1][j-1]==1 ) )
					k++;
			}
		}
		cout<<k;


	}

	
	return 0;
}