#include<bits/stdc++.h>
using namespace std;


#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
#define Q 105

int V;
bool graph[Q][Q];


void printSolution(int color[]); 

bool isSafe (int v, int color[], int c) 
{ 
	for (int i = 0; i < V; i++) 
		if (graph[v][i] && c == color[i]) 
			return false; 
	return true; 
} 

bool graphColoringUtil( int m, int color[], int v) 
{ 

	if (v == V) 
		return true; 

	
	for (int c = 1; c <= m; c++) 
	{ 
		
		if (isSafe(v, color, c)) 
		{ 
		color[v] = c; 

		
		if (graphColoringUtil ( m, color, v+1) == true) 
			return true; 

		color[v] = 0; 
		} 
	} 

	return false; 
} 

bool graphColoring(int m) 
{ 
	int color[V]; 
	for (int i = 0; i < V; i++) 
	color[i] = 0; 

	if (graphColoringUtil( m, color, 0) == false) 
	{ 
	printf("DEAD"); 
	return false; 
	} 

	printf("SAVED"); 
	return true; 
} 


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	int m;
	cin>>V>>m;
	
	memset(graph,false,sizeof(graph));
	rep(i,0,m)
	{
		int a,b;
		cin>>a>>b;
		graph[a-1][b-1]=true;
		graph[b-1][a-1]=true;

	}
	 
	graphColoring (2); 
	
	return 0;
}


