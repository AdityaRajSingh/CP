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
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define n 4

bool util(int maze[n][n],int sol[n][n],int x, int y)
{
	if(x==n-1 && y==n-1)
	{
		sol[x][y]=1;
		return true;
	}
	if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1) 
	{
		sol[x][y]=1;

		if(util(maze,sol,x+1,y)==true)
			return true;

		if(util(maze,sol,x,y+1)==true)
			return true;

		sol[x][y]=0;
		return false;
	}
	return false;
}






bool solveMaze(int maze[n][n])
{
	int sol[n][n] = { { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 } }; 

    if(util(maze,sol,0,0)==false)
    {
    	cout<<"Soln doesnt exist\n";
    	return false;
    }

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            printf(" %d ", sol[i][j]); 
        printf("\n"); 
    } 
    return true;
}






int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
int maze[n][n] = 	{ { 1, 0, 0, 0 }, 
                       { 1, 1, 0, 1 }, 
                       { 0, 1, 0, 0 }, 
                       { 1, 1, 1, 1 } }; 
  
    solveMaze(maze); 
    





////////////////////////////////////////////////////////////////////////////////////////////

	
	return 0;
}