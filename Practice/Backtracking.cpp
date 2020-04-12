#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

int smax;
int a[55][55];
int R,C;

int vis[55][55];



int returnVal(int x, int y)
{
	if(x>=0 && x<R && y>=0 && y<C && vis[x][y]==0)
		return a[x][y];
	return 0;
}

void findMaxIsland(int x, int y)
{

	    vis[x][y]=1;
		// c++;
		// if(c>smax)
		// smax=c;
		smax++;
	// cout<<x<<" "<<y<<"\t "<<" "<<smax<<endl;

	int row[8]={-1,-1,-1,0,0,1,1,1};
	int col[8]={-1,0,1,-1,1,-1,0,1};

	for(int i=0;i<8;i++)
	{
		if(returnVal(x+row[i],y+col[i]))
		{
			findMaxIsland(x+row[i],y+col[i]);
		}
	}

}

int main()
{
	#ifndef ONLINE_JUDGEx
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;

	int t;
	cin>>t;

    while(t--)
    {
        smax=0;
       cin>>R>>C; 

       memset(vis,0,sizeof(vis));

	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cin>>a[i][j];
		}
	}
	int ans=0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(a[i][j]==1 && vis[i][j]==0)
			{
				findMaxIsland(i,j);
				
				ans=max(ans,smax);
				smax=0;
			}
		}
	}
	// findMaxIsland(0,0);

	// for(int i=0;i<R;i++)
	// {
	// 	for(int j=0;j<C;j++)
	// 	{
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	// cout<<"\n";
 
 //    for(int i=0;i<R;i++)
	// {
	// 	for(int j=0;j<C;j++)
	// 	{
	// 		cout<<vis[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	cout<<ans<<endl;
 	}
	
	return 0;
}