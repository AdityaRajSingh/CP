#include<bits/stdc++.h>
using namespace std;
 
 int queue<int> q;
int k=0;
void pushb(int x)
{
	q.push(x);
	k++;
}


void popb()
{
	for(int i=0;i<q.size()-1;i++)
	{
		q.push(q[i]);
		q.pop();
	}
	q.pop();
	k--;

}

void topb()
{
cout<<q[]
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
//////////////////////////////////////////////////////////////////////
for(int i=1;i<=10;i++)
pushb(i);

popb();

topb();








//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}