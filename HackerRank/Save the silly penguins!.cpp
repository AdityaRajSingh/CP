#include<bits/stdc++.h>
using namespace std;


#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
#define V 5

void printSolution(int color[]); 

bool isSafe (int v, bool graph[V][V], int color[], int c) 
{ 
	for (int i = 0; i < V; i++) 
		if (graph[v][i] && c == color[i]) 
			return false; 
	return true; 
} 

/* A recursive utility function to solve m coloring problem */
bool graphColoringUtil(bool graph[V][V], int m, int color[], int v) 
{ 
	/* base case: If all vertices are assigned a color then 
	return true */
	if (v == V) 
		return true; 

	/* Consider this vertex v and try different colors */
	for (int c = 1; c <= m; c++) 
	{ 
		/* Check if assignment of color c to v is fine*/
		if (isSafe(v, graph, color, c)) 
		{ 
		color[v] = c; 

		/* recur to assign colors to rest of the vertices */
		if (graphColoringUtil (graph, m, color, v+1) == true) 
			return true; 

			/* If assigning color c doesn't lead to a solution 
			then remove it */
		color[v] = 0; 
		} 
	} 

	/* If no color can be assigned to this vertex then return false */
	return false; 
} 

bool graphColoring(bool graph[V][V], int m) 
{ 
	// Initialize all color values as 0. This initialization is needed 
	// correct functioning of isSafe() 
	int color[V]; 
	for (int i = 0; i < V; i++) 
	color[i] = 0; 

	// Call graphColoringUtil() for vertex 0 
	if (graphColoringUtil(graph, m, color, 0) == false) 
	{ 
	printf("DEAD"); 
	return false; 
	} 

	// Print the solution 
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
	int m,k;
	cin>>k>>m;
	bool graph[V][V];
	memset(graph,false,sizeof(graph));
	rep(i,0,m)
	{
		int a,b;
		cin>>a>>b;
		graph[a-1][b-1]=true;
		graph[b-1][a-1]=true;

	}
	 
	graphColoring (graph, 2); 
	
	return 0;
}


