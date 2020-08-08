#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}


map<int ,vector<int>> mp;
void verticalOrder(struct node* root, int h)
{

if(root==NULL)
{
	return;
}
mp[h].push_back(root->data);


verticalOrder(root->left,h-1);

verticalOrder(root->right,h+1);
}


void printVerticalOrder()
{
	map<int, vector<int>>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++)
	{
		for(int j=0;j<itr->second.size();j++)
		{
			if(j==0)
			cout<<itr->second[j]<<" ";
		}	
		//cout<<endl;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////

struct node* root= newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->left->right->right=newNode(6);


verticalOrder(root,0);
printVerticalOrder();




//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}